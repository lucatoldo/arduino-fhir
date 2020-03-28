// Copyright (c) 2005-2020 Code Synthesis Tools CC.
//
// This program was generated by CodeSynthesis XSD/e, an XML Schema
// to C++ data binding compiler for embedded systems.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
//

#ifndef CODESYSTEM_PSKEL_HXX
#define CODESYSTEM_PSKEL_HXX

// Begin prologue.
//
//
// End prologue.

#include <xsde/cxx/version.hxx>

#if (XSDE_INT_VERSION != 3029912L)
#error XSD/e runtime version mismatch
#endif

#include <xsde/cxx/config.hxx>

#ifndef XSDE_ENCODING_UTF8
#error the generated code uses the UTF-8 encoding while the XSD/e runtime does not (reconfigure the runtime or change the --char-encoding value)
#endif

#ifndef XSDE_STL
#error the generated code uses STL while the XSD/e runtime does not (reconfigure the runtime or add --no-stl)
#endif

#ifndef XSDE_IOSTREAM
#error the generated code uses iostream while the XSD/e runtime does not (reconfigure the runtime or add --no-iostream)
#endif

#ifndef XSDE_EXCEPTIONS
#error the generated code uses exceptions while the XSD/e runtime does not (reconfigure the runtime or add --no-exceptions)
#endif

#ifndef XSDE_LONGLONG
#error the generated code uses long long while the XSD/e runtime does not (reconfigure the runtime or add --no-long-long)
#endif

#ifndef XSDE_PARSER_VALIDATION
#error the generated code uses validation while the XSD/e runtime does not (reconfigure the runtime or add --suppress-validation)
#endif

#ifdef XSDE_POLYMORPHIC
#error the generated code expects XSD/e runtime without polymorphism support (reconfigure the runtime or add --generate-polymorphic/--runtime-polymorphic)
#endif

#ifndef XSDE_REUSE_STYLE_TIEIN
#error the generated code uses the tiein reuse style while the XSD/e runtime does not (reconfigure the runtime or add --reuse-style-mixin or --reuse-style-none)
#endif

#ifdef XSDE_CUSTOM_ALLOCATOR
#error the XSD/e runtime uses custom allocator while the generated code does not (reconfigure the runtime or add --custom-allocator)
#endif

#include <xsde/cxx/pre.hxx>

// Forward declarations
//
namespace fhir
{
  class CodeSystem_pskel;
  class CodeSystem_Filter_pskel;
  class CodeSystem_Property_pskel;
  class CodeSystem_Concept_pskel;
  class CodeSystem_Designation_pskel;
  class CodeSystem_Property1_pskel;
  class FilterOperator_list_pskel;
  class FilterOperator_pskel;
  class PropertyType_list_pskel;
  class PropertyType_pskel;
  class CodeSystemHierarchyMeaning_list_pskel;
  class CodeSystemHierarchyMeaning_pskel;
  class CodeSystemContentMode_list_pskel;
  class CodeSystemContentMode_pskel;
}


#include <xsde/cxx/ro-string.hxx>

#include <xsde/cxx/parser/xml-schema.hxx>

#include <xsde/cxx/parser/exceptions.hxx>

#include <xsde/cxx/stack.hxx>
#include <xsde/cxx/parser/validating/parser.hxx>
#include <xsde/cxx/parser/validating/xml-schema-pskel.hxx>
#include <xsde/cxx/parser/validating/xml-schema-pimpl.hxx>

#include <xsde/cxx/parser/expat/document.hxx>

namespace xml_schema
{
  // Built-in XML Schema types mapping.
  //
  using ::xsde::cxx::string_sequence;
  using ::xsde::cxx::qname;
  using ::xsde::cxx::buffer;
  using ::xsde::cxx::time_zone;
  using ::xsde::cxx::gday;
  using ::xsde::cxx::gmonth;
  using ::xsde::cxx::gyear;
  using ::xsde::cxx::gmonth_day;
  using ::xsde::cxx::gyear_month;
  using ::xsde::cxx::date;
  using ::xsde::cxx::time;
  using ::xsde::cxx::date_time;
  using ::xsde::cxx::duration;

  // Base parser skeletons.
  //
  using ::xsde::cxx::parser::parser_base;
  typedef ::xsde::cxx::parser::validating::empty_content parser_empty_content;
  typedef ::xsde::cxx::parser::validating::simple_content parser_simple_content;
  typedef ::xsde::cxx::parser::validating::complex_content parser_complex_content;
  typedef ::xsde::cxx::parser::validating::list_base parser_list_base;

  // Parser skeletons and implementations for the XML Schema
  // built-in types.
  //
  using ::xsde::cxx::parser::validating::any_type_pskel;
  using ::xsde::cxx::parser::validating::any_type_pimpl;

  using ::xsde::cxx::parser::validating::any_simple_type_pskel;
  using ::xsde::cxx::parser::validating::any_simple_type_pimpl;

  using ::xsde::cxx::parser::validating::byte_pskel;
  using ::xsde::cxx::parser::validating::byte_pimpl;

  using ::xsde::cxx::parser::validating::unsigned_byte_pskel;
  using ::xsde::cxx::parser::validating::unsigned_byte_pimpl;

  using ::xsde::cxx::parser::validating::short_pskel;
  using ::xsde::cxx::parser::validating::short_pimpl;

  using ::xsde::cxx::parser::validating::unsigned_short_pskel;
  using ::xsde::cxx::parser::validating::unsigned_short_pimpl;

  using ::xsde::cxx::parser::validating::int_pskel;
  using ::xsde::cxx::parser::validating::int_pimpl;

  using ::xsde::cxx::parser::validating::unsigned_int_pskel;
  using ::xsde::cxx::parser::validating::unsigned_int_pimpl;

  using ::xsde::cxx::parser::validating::long_pskel;
  using ::xsde::cxx::parser::validating::long_pimpl;

  using ::xsde::cxx::parser::validating::unsigned_long_pskel;
  using ::xsde::cxx::parser::validating::unsigned_long_pimpl;

  using ::xsde::cxx::parser::validating::integer_pskel;
  using ::xsde::cxx::parser::validating::integer_pimpl;

  using ::xsde::cxx::parser::validating::non_positive_integer_pskel;
  using ::xsde::cxx::parser::validating::non_positive_integer_pimpl;

  using ::xsde::cxx::parser::validating::non_negative_integer_pskel;
  using ::xsde::cxx::parser::validating::non_negative_integer_pimpl;

  using ::xsde::cxx::parser::validating::positive_integer_pskel;
  using ::xsde::cxx::parser::validating::positive_integer_pimpl;

  using ::xsde::cxx::parser::validating::negative_integer_pskel;
  using ::xsde::cxx::parser::validating::negative_integer_pimpl;

  using ::xsde::cxx::parser::validating::boolean_pskel;
  using ::xsde::cxx::parser::validating::boolean_pimpl;

  using ::xsde::cxx::parser::validating::float_pskel;
  using ::xsde::cxx::parser::validating::float_pimpl;

  using ::xsde::cxx::parser::validating::double_pskel;
  using ::xsde::cxx::parser::validating::double_pimpl;

  using ::xsde::cxx::parser::validating::decimal_pskel;
  using ::xsde::cxx::parser::validating::decimal_pimpl;

  using ::xsde::cxx::parser::validating::string_pskel;
  using ::xsde::cxx::parser::validating::string_pimpl;

  using ::xsde::cxx::parser::validating::normalized_string_pskel;
  using ::xsde::cxx::parser::validating::normalized_string_pimpl;

  using ::xsde::cxx::parser::validating::token_pskel;
  using ::xsde::cxx::parser::validating::token_pimpl;

  using ::xsde::cxx::parser::validating::name_pskel;
  using ::xsde::cxx::parser::validating::name_pimpl;

  using ::xsde::cxx::parser::validating::nmtoken_pskel;
  using ::xsde::cxx::parser::validating::nmtoken_pimpl;

  using ::xsde::cxx::parser::validating::nmtokens_pskel;
  using ::xsde::cxx::parser::validating::nmtokens_pimpl;

  using ::xsde::cxx::parser::validating::ncname_pskel;
  using ::xsde::cxx::parser::validating::ncname_pimpl;

  using ::xsde::cxx::parser::validating::language_pskel;
  using ::xsde::cxx::parser::validating::language_pimpl;

  using ::xsde::cxx::parser::validating::id_pskel;
  using ::xsde::cxx::parser::validating::id_pimpl;

  using ::xsde::cxx::parser::validating::idref_pskel;
  using ::xsde::cxx::parser::validating::idref_pimpl;

  using ::xsde::cxx::parser::validating::idrefs_pskel;
  using ::xsde::cxx::parser::validating::idrefs_pimpl;

  using ::xsde::cxx::parser::validating::uri_pskel;
  using ::xsde::cxx::parser::validating::uri_pimpl;

  using ::xsde::cxx::parser::validating::qname_pskel;
  using ::xsde::cxx::parser::validating::qname_pimpl;

  using ::xsde::cxx::parser::validating::base64_binary_pskel;
  using ::xsde::cxx::parser::validating::base64_binary_pimpl;

  using ::xsde::cxx::parser::validating::hex_binary_pskel;
  using ::xsde::cxx::parser::validating::hex_binary_pimpl;

  using ::xsde::cxx::parser::validating::date_pskel;
  using ::xsde::cxx::parser::validating::date_pimpl;

  using ::xsde::cxx::parser::validating::date_time_pskel;
  using ::xsde::cxx::parser::validating::date_time_pimpl;

  using ::xsde::cxx::parser::validating::duration_pskel;
  using ::xsde::cxx::parser::validating::duration_pimpl;

  using ::xsde::cxx::parser::validating::gday_pskel;
  using ::xsde::cxx::parser::validating::gday_pimpl;

  using ::xsde::cxx::parser::validating::gmonth_pskel;
  using ::xsde::cxx::parser::validating::gmonth_pimpl;

  using ::xsde::cxx::parser::validating::gmonth_day_pskel;
  using ::xsde::cxx::parser::validating::gmonth_day_pimpl;

  using ::xsde::cxx::parser::validating::gyear_pskel;
  using ::xsde::cxx::parser::validating::gyear_pimpl;

  using ::xsde::cxx::parser::validating::gyear_month_pskel;
  using ::xsde::cxx::parser::validating::gyear_month_pimpl;

  using ::xsde::cxx::parser::validating::time_pskel;
  using ::xsde::cxx::parser::validating::time_pimpl;

  // Read-only string.
  //
  using ::xsde::cxx::ro_string;

  // Error codes.
  //
  typedef xsde::cxx::parser::expat::xml_error parser_xml_error;
  typedef xsde::cxx::schema_error parser_schema_error;

  // Exceptions.
  //
  typedef xsde::cxx::parser::exception parser_exception;
  typedef xsde::cxx::parser::xml parser_xml;
  typedef xsde::cxx::parser::schema parser_schema;

  // Document parser.
  //
  using xsde::cxx::parser::expat::document_pimpl;

  // Parser context.
  //
  typedef xsde::cxx::parser::context parser_context;
}

#include "fhir-base-pskel.hxx"

namespace fhir
{
  class CodeSystem_pskel: public ::fhir::DomainResource_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    url ();

    virtual void
    identifier ();

    virtual void
    version ();

    virtual void
    name ();

    virtual void
    title ();

    virtual void
    status ();

    virtual void
    experimental ();

    virtual void
    date ();

    virtual void
    publisher ();

    virtual void
    contact ();

    virtual void
    description ();

    virtual void
    useContext ();

    virtual void
    jurisdiction ();

    virtual void
    purpose ();

    virtual void
    copyright ();

    virtual void
    caseSensitive ();

    virtual void
    valueSet ();

    virtual void
    hierarchyMeaning ();

    virtual void
    compositional ();

    virtual void
    versionNeeded ();

    virtual void
    content ();

    virtual void
    supplements ();

    virtual void
    count ();

    virtual void
    filter ();

    virtual void
    property ();

    virtual void
    concept ();

    virtual void
    post_CodeSystem ();

    // Parser construction API.
    //
    void
    parsers (::fhir::id_pskel& /* id */,
             ::fhir::Meta_pskel& /* meta */,
             ::fhir::uri_pskel& /* implicitRules */,
             ::fhir::code_pskel& /* language */,
             ::fhir::Narrative_pskel& /* text */,
             ::fhir::ResourceContainer_pskel& /* contained */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::uri_pskel& /* url */,
             ::fhir::Identifier_pskel& /* identifier */,
             ::fhir::string_pskel& /* version */,
             ::fhir::string_pskel& /* name */,
             ::fhir::string_pskel& /* title */,
             ::fhir::PublicationStatus_pskel& /* status */,
             ::fhir::boolean_pskel& /* experimental */,
             ::fhir::dateTime_pskel& /* date */,
             ::fhir::string_pskel& /* publisher */,
             ::fhir::ContactDetail_pskel& /* contact */,
             ::fhir::markdown_pskel& /* description */,
             ::fhir::UsageContext_pskel& /* useContext */,
             ::fhir::CodeableConcept_pskel& /* jurisdiction */,
             ::fhir::markdown_pskel& /* purpose */,
             ::fhir::markdown_pskel& /* copyright */,
             ::fhir::boolean_pskel& /* caseSensitive */,
             ::fhir::canonical_pskel& /* valueSet */,
             ::fhir::CodeSystemHierarchyMeaning_pskel& /* hierarchyMeaning */,
             ::fhir::boolean_pskel& /* compositional */,
             ::fhir::boolean_pskel& /* versionNeeded */,
             ::fhir::CodeSystemContentMode_pskel& /* content */,
             ::fhir::canonical_pskel& /* supplements */,
             ::fhir::unsignedInt_pskel& /* count */,
             ::fhir::CodeSystem_Filter_pskel& /* filter */,
             ::fhir::CodeSystem_Property_pskel& /* property */,
             ::fhir::CodeSystem_Concept_pskel& /* concept */);

    // Individual element parsers.
    //
    void
    url_parser (::fhir::uri_pskel&);

    void
    identifier_parser (::fhir::Identifier_pskel&);

    void
    version_parser (::fhir::string_pskel&);

    void
    name_parser (::fhir::string_pskel&);

    void
    title_parser (::fhir::string_pskel&);

    void
    status_parser (::fhir::PublicationStatus_pskel&);

    void
    experimental_parser (::fhir::boolean_pskel&);

    void
    date_parser (::fhir::dateTime_pskel&);

    void
    publisher_parser (::fhir::string_pskel&);

    void
    contact_parser (::fhir::ContactDetail_pskel&);

    void
    description_parser (::fhir::markdown_pskel&);

    void
    useContext_parser (::fhir::UsageContext_pskel&);

    void
    jurisdiction_parser (::fhir::CodeableConcept_pskel&);

    void
    purpose_parser (::fhir::markdown_pskel&);

    void
    copyright_parser (::fhir::markdown_pskel&);

    void
    caseSensitive_parser (::fhir::boolean_pskel&);

    void
    valueSet_parser (::fhir::canonical_pskel&);

    void
    hierarchyMeaning_parser (::fhir::CodeSystemHierarchyMeaning_pskel&);

    void
    compositional_parser (::fhir::boolean_pskel&);

    void
    versionNeeded_parser (::fhir::boolean_pskel&);

    void
    content_parser (::fhir::CodeSystemContentMode_pskel&);

    void
    supplements_parser (::fhir::canonical_pskel&);

    void
    count_parser (::fhir::unsignedInt_pskel&);

    void
    filter_parser (::fhir::CodeSystem_Filter_pskel&);

    void
    property_parser (::fhir::CodeSystem_Property_pskel&);

    void
    concept_parser (::fhir::CodeSystem_Concept_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    CodeSystem_pskel (::fhir::DomainResource_pskel* tiein);

    // Implementation details.
    //
    protected:
    CodeSystem_pskel* CodeSystem_impl_;
    CodeSystem_pskel (CodeSystem_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::uri_pskel* url_parser_;
    ::fhir::Identifier_pskel* identifier_parser_;
    ::fhir::string_pskel* version_parser_;
    ::fhir::string_pskel* name_parser_;
    ::fhir::string_pskel* title_parser_;
    ::fhir::PublicationStatus_pskel* status_parser_;
    ::fhir::boolean_pskel* experimental_parser_;
    ::fhir::dateTime_pskel* date_parser_;
    ::fhir::string_pskel* publisher_parser_;
    ::fhir::ContactDetail_pskel* contact_parser_;
    ::fhir::markdown_pskel* description_parser_;
    ::fhir::UsageContext_pskel* useContext_parser_;
    ::fhir::CodeableConcept_pskel* jurisdiction_parser_;
    ::fhir::markdown_pskel* purpose_parser_;
    ::fhir::markdown_pskel* copyright_parser_;
    ::fhir::boolean_pskel* caseSensitive_parser_;
    ::fhir::canonical_pskel* valueSet_parser_;
    ::fhir::CodeSystemHierarchyMeaning_pskel* hierarchyMeaning_parser_;
    ::fhir::boolean_pskel* compositional_parser_;
    ::fhir::boolean_pskel* versionNeeded_parser_;
    ::fhir::CodeSystemContentMode_pskel* content_parser_;
    ::fhir::canonical_pskel* supplements_parser_;
    ::fhir::unsignedInt_pskel* count_parser_;
    ::fhir::CodeSystem_Filter_pskel* filter_parser_;
    ::fhir::CodeSystem_Property_pskel* property_parser_;
    ::fhir::CodeSystem_Concept_pskel* concept_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::CodeSystem_pskel::*func) (
        unsigned long&,
        unsigned long&,
        const ::xsde::cxx::ro_string&,
        const ::xsde::cxx::ro_string&,
        bool);
      unsigned long state;
      unsigned long count;
    };

    struct v_state_
    {
      v_state_descr_ data[2UL];
      unsigned long size;
    };

    protected:
    v_state_ v_state_first_;
    ::xsde::cxx::stack v_state_stack_;

    virtual void
    _pre_e_validate ();

    virtual void
    _post_e_validate ();

    void
    sequence_0 (unsigned long&,
                unsigned long&,
                const ::xsde::cxx::ro_string&,
                const ::xsde::cxx::ro_string&,
                bool);
  };

  class CodeSystem_Filter_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    code ();

    virtual void
    description ();

    virtual void
    operator_ ();

    virtual void
    value ();

    virtual void
    post_CodeSystem_Filter ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::code_pskel& /* code */,
             ::fhir::string_pskel& /* description */,
             ::fhir::FilterOperator_pskel& /* operator */,
             ::fhir::string_pskel& /* value */);

    // Individual element parsers.
    //
    void
    code_parser (::fhir::code_pskel&);

    void
    description_parser (::fhir::string_pskel&);

    void
    operator__parser (::fhir::FilterOperator_pskel&);

    void
    value_parser (::fhir::string_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    CodeSystem_Filter_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    CodeSystem_Filter_pskel* CodeSystem_Filter_impl_;
    CodeSystem_Filter_pskel (CodeSystem_Filter_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::code_pskel* code_parser_;
    ::fhir::string_pskel* description_parser_;
    ::fhir::FilterOperator_pskel* operator__parser_;
    ::fhir::string_pskel* value_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::CodeSystem_Filter_pskel::*func) (
        unsigned long&,
        unsigned long&,
        const ::xsde::cxx::ro_string&,
        const ::xsde::cxx::ro_string&,
        bool);
      unsigned long state;
      unsigned long count;
    };

    struct v_state_
    {
      v_state_descr_ data[2UL];
      unsigned long size;
    };

    protected:
    v_state_ v_state_first_;
    ::xsde::cxx::stack v_state_stack_;

    virtual void
    _pre_e_validate ();

    virtual void
    _post_e_validate ();

    void
    sequence_0 (unsigned long&,
                unsigned long&,
                const ::xsde::cxx::ro_string&,
                const ::xsde::cxx::ro_string&,
                bool);
  };

  class CodeSystem_Property_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    code ();

    virtual void
    uri ();

    virtual void
    description ();

    virtual void
    type ();

    virtual void
    post_CodeSystem_Property ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::code_pskel& /* code */,
             ::fhir::uri_pskel& /* uri */,
             ::fhir::string_pskel& /* description */,
             ::fhir::PropertyType_pskel& /* type */);

    // Individual element parsers.
    //
    void
    code_parser (::fhir::code_pskel&);

    void
    uri_parser (::fhir::uri_pskel&);

    void
    description_parser (::fhir::string_pskel&);

    void
    type_parser (::fhir::PropertyType_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    CodeSystem_Property_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    CodeSystem_Property_pskel* CodeSystem_Property_impl_;
    CodeSystem_Property_pskel (CodeSystem_Property_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::code_pskel* code_parser_;
    ::fhir::uri_pskel* uri_parser_;
    ::fhir::string_pskel* description_parser_;
    ::fhir::PropertyType_pskel* type_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::CodeSystem_Property_pskel::*func) (
        unsigned long&,
        unsigned long&,
        const ::xsde::cxx::ro_string&,
        const ::xsde::cxx::ro_string&,
        bool);
      unsigned long state;
      unsigned long count;
    };

    struct v_state_
    {
      v_state_descr_ data[2UL];
      unsigned long size;
    };

    protected:
    v_state_ v_state_first_;
    ::xsde::cxx::stack v_state_stack_;

    virtual void
    _pre_e_validate ();

    virtual void
    _post_e_validate ();

    void
    sequence_0 (unsigned long&,
                unsigned long&,
                const ::xsde::cxx::ro_string&,
                const ::xsde::cxx::ro_string&,
                bool);
  };

  class CodeSystem_Concept_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    code ();

    virtual void
    display ();

    virtual void
    definition ();

    virtual void
    designation ();

    virtual void
    property ();

    virtual void
    concept ();

    virtual void
    post_CodeSystem_Concept ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::code_pskel& /* code */,
             ::fhir::string_pskel& /* display */,
             ::fhir::string_pskel& /* definition */,
             ::fhir::CodeSystem_Designation_pskel& /* designation */,
             ::fhir::CodeSystem_Property1_pskel& /* property */,
             ::fhir::CodeSystem_Concept_pskel& /* concept */);

    // Individual element parsers.
    //
    void
    code_parser (::fhir::code_pskel&);

    void
    display_parser (::fhir::string_pskel&);

    void
    definition_parser (::fhir::string_pskel&);

    void
    designation_parser (::fhir::CodeSystem_Designation_pskel&);

    void
    property_parser (::fhir::CodeSystem_Property1_pskel&);

    void
    concept_parser (::fhir::CodeSystem_Concept_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    CodeSystem_Concept_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    CodeSystem_Concept_pskel* CodeSystem_Concept_impl_;
    CodeSystem_Concept_pskel (CodeSystem_Concept_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::code_pskel* code_parser_;
    ::fhir::string_pskel* display_parser_;
    ::fhir::string_pskel* definition_parser_;
    ::fhir::CodeSystem_Designation_pskel* designation_parser_;
    ::fhir::CodeSystem_Property1_pskel* property_parser_;
    ::fhir::CodeSystem_Concept_pskel* concept_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::CodeSystem_Concept_pskel::*func) (
        unsigned long&,
        unsigned long&,
        const ::xsde::cxx::ro_string&,
        const ::xsde::cxx::ro_string&,
        bool);
      unsigned long state;
      unsigned long count;
    };

    struct v_state_
    {
      v_state_descr_ data[2UL];
      unsigned long size;
    };

    protected:
    v_state_ v_state_first_;
    ::xsde::cxx::stack v_state_stack_;

    virtual void
    _pre_e_validate ();

    virtual void
    _post_e_validate ();

    void
    sequence_0 (unsigned long&,
                unsigned long&,
                const ::xsde::cxx::ro_string&,
                const ::xsde::cxx::ro_string&,
                bool);
  };

  class CodeSystem_Designation_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    language ();

    virtual void
    use ();

    virtual void
    value ();

    virtual void
    post_CodeSystem_Designation ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::code_pskel& /* language */,
             ::fhir::Coding_pskel& /* use */,
             ::fhir::string_pskel& /* value */);

    // Individual element parsers.
    //
    void
    language_parser (::fhir::code_pskel&);

    void
    use_parser (::fhir::Coding_pskel&);

    void
    value_parser (::fhir::string_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    CodeSystem_Designation_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    CodeSystem_Designation_pskel* CodeSystem_Designation_impl_;
    CodeSystem_Designation_pskel (CodeSystem_Designation_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::code_pskel* language_parser_;
    ::fhir::Coding_pskel* use_parser_;
    ::fhir::string_pskel* value_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::CodeSystem_Designation_pskel::*func) (
        unsigned long&,
        unsigned long&,
        const ::xsde::cxx::ro_string&,
        const ::xsde::cxx::ro_string&,
        bool);
      unsigned long state;
      unsigned long count;
    };

    struct v_state_
    {
      v_state_descr_ data[2UL];
      unsigned long size;
    };

    protected:
    v_state_ v_state_first_;
    ::xsde::cxx::stack v_state_stack_;

    virtual void
    _pre_e_validate ();

    virtual void
    _post_e_validate ();

    void
    sequence_0 (unsigned long&,
                unsigned long&,
                const ::xsde::cxx::ro_string&,
                const ::xsde::cxx::ro_string&,
                bool);
  };

  class CodeSystem_Property1_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    code ();

    virtual void
    valueCode ();

    virtual void
    valueCoding ();

    virtual void
    valueString ();

    virtual void
    valueInteger ();

    virtual void
    valueBoolean ();

    virtual void
    valueDateTime ();

    virtual void
    valueDecimal ();

    virtual void
    post_CodeSystem_Property1 ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::code_pskel& /* code */,
             ::fhir::code_pskel& /* valueCode */,
             ::fhir::Coding_pskel& /* valueCoding */,
             ::fhir::string_pskel& /* valueString */,
             ::fhir::integer_pskel& /* valueInteger */,
             ::fhir::boolean_pskel& /* valueBoolean */,
             ::fhir::dateTime_pskel& /* valueDateTime */,
             ::fhir::decimal_pskel& /* valueDecimal */);

    // Individual element parsers.
    //
    void
    code_parser (::fhir::code_pskel&);

    void
    valueCode_parser (::fhir::code_pskel&);

    void
    valueCoding_parser (::fhir::Coding_pskel&);

    void
    valueString_parser (::fhir::string_pskel&);

    void
    valueInteger_parser (::fhir::integer_pskel&);

    void
    valueBoolean_parser (::fhir::boolean_pskel&);

    void
    valueDateTime_parser (::fhir::dateTime_pskel&);

    void
    valueDecimal_parser (::fhir::decimal_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    CodeSystem_Property1_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    CodeSystem_Property1_pskel* CodeSystem_Property1_impl_;
    CodeSystem_Property1_pskel (CodeSystem_Property1_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::code_pskel* code_parser_;
    ::fhir::code_pskel* valueCode_parser_;
    ::fhir::Coding_pskel* valueCoding_parser_;
    ::fhir::string_pskel* valueString_parser_;
    ::fhir::integer_pskel* valueInteger_parser_;
    ::fhir::boolean_pskel* valueBoolean_parser_;
    ::fhir::dateTime_pskel* valueDateTime_parser_;
    ::fhir::decimal_pskel* valueDecimal_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::CodeSystem_Property1_pskel::*func) (
        unsigned long&,
        unsigned long&,
        const ::xsde::cxx::ro_string&,
        const ::xsde::cxx::ro_string&,
        bool);
      unsigned long state;
      unsigned long count;
    };

    struct v_state_
    {
      v_state_descr_ data[2UL];
      unsigned long size;
    };

    protected:
    v_state_ v_state_first_;
    ::xsde::cxx::stack v_state_stack_;

    virtual void
    _pre_e_validate ();

    virtual void
    _post_e_validate ();

    void
    sequence_0 (unsigned long&,
                unsigned long&,
                const ::xsde::cxx::ro_string&,
                const ::xsde::cxx::ro_string&,
                bool);
  };

  class FilterOperator_list_pskel: public ::fhir::code_primitive_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    virtual void
    post_FilterOperator_list ();

    // Constructor.
    //
    FilterOperator_list_pskel (::fhir::code_primitive_pskel* tiein);

    // Implementation details.
    //
    protected:
    FilterOperator_list_pskel* FilterOperator_list_impl_;
    FilterOperator_list_pskel (FilterOperator_list_pskel*, void*);

    protected:
    static const char* const _xsde_FilterOperator_list_pskel_enums_[9UL];
  };

  class FilterOperator_pskel: public ::fhir::Element_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Attributes.
    //
    virtual void
    value ();

    virtual void
    post_FilterOperator ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::FilterOperator_list_pskel& /* value */);

    // Individual attribute parsers.
    //
    void
    value_parser (::fhir::FilterOperator_list_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    FilterOperator_pskel (::fhir::Element_pskel* tiein);

    // Implementation details.
    //
    protected:
    FilterOperator_pskel* FilterOperator_impl_;
    FilterOperator_pskel (FilterOperator_pskel*, void*);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    protected:
    ::fhir::FilterOperator_list_pskel* value_parser_;
  };

  class PropertyType_list_pskel: public ::fhir::code_primitive_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    virtual void
    post_PropertyType_list ();

    // Constructor.
    //
    PropertyType_list_pskel (::fhir::code_primitive_pskel* tiein);

    // Implementation details.
    //
    protected:
    PropertyType_list_pskel* PropertyType_list_impl_;
    PropertyType_list_pskel (PropertyType_list_pskel*, void*);

    protected:
    static const char* const _xsde_PropertyType_list_pskel_enums_[7UL];
  };

  class PropertyType_pskel: public ::fhir::Element_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Attributes.
    //
    virtual void
    value ();

    virtual void
    post_PropertyType ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::PropertyType_list_pskel& /* value */);

    // Individual attribute parsers.
    //
    void
    value_parser (::fhir::PropertyType_list_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    PropertyType_pskel (::fhir::Element_pskel* tiein);

    // Implementation details.
    //
    protected:
    PropertyType_pskel* PropertyType_impl_;
    PropertyType_pskel (PropertyType_pskel*, void*);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    protected:
    ::fhir::PropertyType_list_pskel* value_parser_;
  };

  class CodeSystemHierarchyMeaning_list_pskel: public ::fhir::code_primitive_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    virtual void
    post_CodeSystemHierarchyMeaning_list ();

    // Constructor.
    //
    CodeSystemHierarchyMeaning_list_pskel (::fhir::code_primitive_pskel* tiein);

    // Implementation details.
    //
    protected:
    CodeSystemHierarchyMeaning_list_pskel* CodeSystemHierarchyMeaning_list_impl_;
    CodeSystemHierarchyMeaning_list_pskel (CodeSystemHierarchyMeaning_list_pskel*, void*);

    protected:
    static const char* const _xsde_CodeSystemHierarchyMeaning_list_pskel_enums_[4UL];
  };

  class CodeSystemHierarchyMeaning_pskel: public ::fhir::Element_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Attributes.
    //
    virtual void
    value ();

    virtual void
    post_CodeSystemHierarchyMeaning ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::CodeSystemHierarchyMeaning_list_pskel& /* value */);

    // Individual attribute parsers.
    //
    void
    value_parser (::fhir::CodeSystemHierarchyMeaning_list_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    CodeSystemHierarchyMeaning_pskel (::fhir::Element_pskel* tiein);

    // Implementation details.
    //
    protected:
    CodeSystemHierarchyMeaning_pskel* CodeSystemHierarchyMeaning_impl_;
    CodeSystemHierarchyMeaning_pskel (CodeSystemHierarchyMeaning_pskel*, void*);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    protected:
    ::fhir::CodeSystemHierarchyMeaning_list_pskel* value_parser_;
  };

  class CodeSystemContentMode_list_pskel: public ::fhir::code_primitive_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    virtual void
    post_CodeSystemContentMode_list ();

    // Constructor.
    //
    CodeSystemContentMode_list_pskel (::fhir::code_primitive_pskel* tiein);

    // Implementation details.
    //
    protected:
    CodeSystemContentMode_list_pskel* CodeSystemContentMode_list_impl_;
    CodeSystemContentMode_list_pskel (CodeSystemContentMode_list_pskel*, void*);

    protected:
    static const char* const _xsde_CodeSystemContentMode_list_pskel_enums_[5UL];
  };

  class CodeSystemContentMode_pskel: public ::fhir::Element_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Attributes.
    //
    virtual void
    value ();

    virtual void
    post_CodeSystemContentMode ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::CodeSystemContentMode_list_pskel& /* value */);

    // Individual attribute parsers.
    //
    void
    value_parser (::fhir::CodeSystemContentMode_list_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    CodeSystemContentMode_pskel (::fhir::Element_pskel* tiein);

    // Implementation details.
    //
    protected:
    CodeSystemContentMode_pskel* CodeSystemContentMode_impl_;
    CodeSystemContentMode_pskel (CodeSystemContentMode_pskel*, void*);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    protected:
    ::fhir::CodeSystemContentMode_list_pskel* value_parser_;
  };
}

#include <xsde/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // CODESYSTEM_PSKEL_HXX
