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

#ifndef VALUESET_PSKEL_HXX
#define VALUESET_PSKEL_HXX

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
  class ValueSet_pskel;
  class ValueSet_Compose_pskel;
  class ValueSet_Include_pskel;
  class ValueSet_Concept_pskel;
  class ValueSet_Designation_pskel;
  class ValueSet_Filter_pskel;
  class ValueSet_Expansion_pskel;
  class ValueSet_Parameter_pskel;
  class ValueSet_Contains_pskel;
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
  class ValueSet_pskel: public ::fhir::DomainResource_pskel
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
    immutable ();

    virtual void
    purpose ();

    virtual void
    copyright ();

    virtual void
    compose ();

    virtual void
    expansion ();

    virtual void
    post_ValueSet ();

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
             ::fhir::boolean_pskel& /* immutable */,
             ::fhir::markdown_pskel& /* purpose */,
             ::fhir::markdown_pskel& /* copyright */,
             ::fhir::ValueSet_Compose_pskel& /* compose */,
             ::fhir::ValueSet_Expansion_pskel& /* expansion */);

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
    immutable_parser (::fhir::boolean_pskel&);

    void
    purpose_parser (::fhir::markdown_pskel&);

    void
    copyright_parser (::fhir::markdown_pskel&);

    void
    compose_parser (::fhir::ValueSet_Compose_pskel&);

    void
    expansion_parser (::fhir::ValueSet_Expansion_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    ValueSet_pskel (::fhir::DomainResource_pskel* tiein);

    // Implementation details.
    //
    protected:
    ValueSet_pskel* ValueSet_impl_;
    ValueSet_pskel (ValueSet_pskel*, void*);

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
    ::fhir::boolean_pskel* immutable_parser_;
    ::fhir::markdown_pskel* purpose_parser_;
    ::fhir::markdown_pskel* copyright_parser_;
    ::fhir::ValueSet_Compose_pskel* compose_parser_;
    ::fhir::ValueSet_Expansion_pskel* expansion_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::ValueSet_pskel::*func) (
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

  class ValueSet_Compose_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    lockedDate ();

    virtual void
    inactive ();

    virtual void
    include ();

    virtual void
    exclude ();

    virtual void
    post_ValueSet_Compose ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::date_pskel& /* lockedDate */,
             ::fhir::boolean_pskel& /* inactive */,
             ::fhir::ValueSet_Include_pskel& /* include */,
             ::fhir::ValueSet_Include_pskel& /* exclude */);

    // Individual element parsers.
    //
    void
    lockedDate_parser (::fhir::date_pskel&);

    void
    inactive_parser (::fhir::boolean_pskel&);

    void
    include_parser (::fhir::ValueSet_Include_pskel&);

    void
    exclude_parser (::fhir::ValueSet_Include_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    ValueSet_Compose_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    ValueSet_Compose_pskel* ValueSet_Compose_impl_;
    ValueSet_Compose_pskel (ValueSet_Compose_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::date_pskel* lockedDate_parser_;
    ::fhir::boolean_pskel* inactive_parser_;
    ::fhir::ValueSet_Include_pskel* include_parser_;
    ::fhir::ValueSet_Include_pskel* exclude_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::ValueSet_Compose_pskel::*func) (
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

  class ValueSet_Include_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    system ();

    virtual void
    version ();

    virtual void
    concept ();

    virtual void
    filter ();

    virtual void
    valueSet ();

    virtual void
    post_ValueSet_Include ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::uri_pskel& /* system */,
             ::fhir::string_pskel& /* version */,
             ::fhir::ValueSet_Concept_pskel& /* concept */,
             ::fhir::ValueSet_Filter_pskel& /* filter */,
             ::fhir::canonical_pskel& /* valueSet */);

    // Individual element parsers.
    //
    void
    system_parser (::fhir::uri_pskel&);

    void
    version_parser (::fhir::string_pskel&);

    void
    concept_parser (::fhir::ValueSet_Concept_pskel&);

    void
    filter_parser (::fhir::ValueSet_Filter_pskel&);

    void
    valueSet_parser (::fhir::canonical_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    ValueSet_Include_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    ValueSet_Include_pskel* ValueSet_Include_impl_;
    ValueSet_Include_pskel (ValueSet_Include_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::uri_pskel* system_parser_;
    ::fhir::string_pskel* version_parser_;
    ::fhir::ValueSet_Concept_pskel* concept_parser_;
    ::fhir::ValueSet_Filter_pskel* filter_parser_;
    ::fhir::canonical_pskel* valueSet_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::ValueSet_Include_pskel::*func) (
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

  class ValueSet_Concept_pskel: public ::fhir::BackboneElement_pskel
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
    designation ();

    virtual void
    post_ValueSet_Concept ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::code_pskel& /* code */,
             ::fhir::string_pskel& /* display */,
             ::fhir::ValueSet_Designation_pskel& /* designation */);

    // Individual element parsers.
    //
    void
    code_parser (::fhir::code_pskel&);

    void
    display_parser (::fhir::string_pskel&);

    void
    designation_parser (::fhir::ValueSet_Designation_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    ValueSet_Concept_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    ValueSet_Concept_pskel* ValueSet_Concept_impl_;
    ValueSet_Concept_pskel (ValueSet_Concept_pskel*, void*);

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
    ::fhir::ValueSet_Designation_pskel* designation_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::ValueSet_Concept_pskel::*func) (
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

  class ValueSet_Designation_pskel: public ::fhir::BackboneElement_pskel
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
    post_ValueSet_Designation ();

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
    ValueSet_Designation_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    ValueSet_Designation_pskel* ValueSet_Designation_impl_;
    ValueSet_Designation_pskel (ValueSet_Designation_pskel*, void*);

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
      void (::fhir::ValueSet_Designation_pskel::*func) (
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

  class ValueSet_Filter_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    property ();

    virtual void
    op ();

    virtual void
    value ();

    virtual void
    post_ValueSet_Filter ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::code_pskel& /* property */,
             ::fhir::FilterOperator_pskel& /* op */,
             ::fhir::string_pskel& /* value */);

    // Individual element parsers.
    //
    void
    property_parser (::fhir::code_pskel&);

    void
    op_parser (::fhir::FilterOperator_pskel&);

    void
    value_parser (::fhir::string_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    ValueSet_Filter_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    ValueSet_Filter_pskel* ValueSet_Filter_impl_;
    ValueSet_Filter_pskel (ValueSet_Filter_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::code_pskel* property_parser_;
    ::fhir::FilterOperator_pskel* op_parser_;
    ::fhir::string_pskel* value_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::ValueSet_Filter_pskel::*func) (
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

  class ValueSet_Expansion_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    identifier ();

    virtual void
    timestamp ();

    virtual void
    total ();

    virtual void
    offset ();

    virtual void
    parameter ();

    virtual void
    contains ();

    virtual void
    post_ValueSet_Expansion ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::uri_pskel& /* identifier */,
             ::fhir::dateTime_pskel& /* timestamp */,
             ::fhir::integer_pskel& /* total */,
             ::fhir::integer_pskel& /* offset */,
             ::fhir::ValueSet_Parameter_pskel& /* parameter */,
             ::fhir::ValueSet_Contains_pskel& /* contains */);

    // Individual element parsers.
    //
    void
    identifier_parser (::fhir::uri_pskel&);

    void
    timestamp_parser (::fhir::dateTime_pskel&);

    void
    total_parser (::fhir::integer_pskel&);

    void
    offset_parser (::fhir::integer_pskel&);

    void
    parameter_parser (::fhir::ValueSet_Parameter_pskel&);

    void
    contains_parser (::fhir::ValueSet_Contains_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    ValueSet_Expansion_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    ValueSet_Expansion_pskel* ValueSet_Expansion_impl_;
    ValueSet_Expansion_pskel (ValueSet_Expansion_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::uri_pskel* identifier_parser_;
    ::fhir::dateTime_pskel* timestamp_parser_;
    ::fhir::integer_pskel* total_parser_;
    ::fhir::integer_pskel* offset_parser_;
    ::fhir::ValueSet_Parameter_pskel* parameter_parser_;
    ::fhir::ValueSet_Contains_pskel* contains_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::ValueSet_Expansion_pskel::*func) (
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

  class ValueSet_Parameter_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    name ();

    virtual void
    valueString ();

    virtual void
    valueBoolean ();

    virtual void
    valueInteger ();

    virtual void
    valueDecimal ();

    virtual void
    valueUri ();

    virtual void
    valueCode ();

    virtual void
    valueDateTime ();

    virtual void
    post_ValueSet_Parameter ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::string_pskel& /* name */,
             ::fhir::string_pskel& /* valueString */,
             ::fhir::boolean_pskel& /* valueBoolean */,
             ::fhir::integer_pskel& /* valueInteger */,
             ::fhir::decimal_pskel& /* valueDecimal */,
             ::fhir::uri_pskel& /* valueUri */,
             ::fhir::code_pskel& /* valueCode */,
             ::fhir::dateTime_pskel& /* valueDateTime */);

    // Individual element parsers.
    //
    void
    name_parser (::fhir::string_pskel&);

    void
    valueString_parser (::fhir::string_pskel&);

    void
    valueBoolean_parser (::fhir::boolean_pskel&);

    void
    valueInteger_parser (::fhir::integer_pskel&);

    void
    valueDecimal_parser (::fhir::decimal_pskel&);

    void
    valueUri_parser (::fhir::uri_pskel&);

    void
    valueCode_parser (::fhir::code_pskel&);

    void
    valueDateTime_parser (::fhir::dateTime_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    ValueSet_Parameter_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    ValueSet_Parameter_pskel* ValueSet_Parameter_impl_;
    ValueSet_Parameter_pskel (ValueSet_Parameter_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::string_pskel* name_parser_;
    ::fhir::string_pskel* valueString_parser_;
    ::fhir::boolean_pskel* valueBoolean_parser_;
    ::fhir::integer_pskel* valueInteger_parser_;
    ::fhir::decimal_pskel* valueDecimal_parser_;
    ::fhir::uri_pskel* valueUri_parser_;
    ::fhir::code_pskel* valueCode_parser_;
    ::fhir::dateTime_pskel* valueDateTime_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::ValueSet_Parameter_pskel::*func) (
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

  class ValueSet_Contains_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    system ();

    virtual void
    abstract ();

    virtual void
    inactive ();

    virtual void
    version ();

    virtual void
    code ();

    virtual void
    display ();

    virtual void
    designation ();

    virtual void
    contains ();

    virtual void
    post_ValueSet_Contains ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::uri_pskel& /* system */,
             ::fhir::boolean_pskel& /* abstract */,
             ::fhir::boolean_pskel& /* inactive */,
             ::fhir::string_pskel& /* version */,
             ::fhir::code_pskel& /* code */,
             ::fhir::string_pskel& /* display */,
             ::fhir::ValueSet_Designation_pskel& /* designation */,
             ::fhir::ValueSet_Contains_pskel& /* contains */);

    // Individual element parsers.
    //
    void
    system_parser (::fhir::uri_pskel&);

    void
    abstract_parser (::fhir::boolean_pskel&);

    void
    inactive_parser (::fhir::boolean_pskel&);

    void
    version_parser (::fhir::string_pskel&);

    void
    code_parser (::fhir::code_pskel&);

    void
    display_parser (::fhir::string_pskel&);

    void
    designation_parser (::fhir::ValueSet_Designation_pskel&);

    void
    contains_parser (::fhir::ValueSet_Contains_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    ValueSet_Contains_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    ValueSet_Contains_pskel* ValueSet_Contains_impl_;
    ValueSet_Contains_pskel (ValueSet_Contains_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::uri_pskel* system_parser_;
    ::fhir::boolean_pskel* abstract_parser_;
    ::fhir::boolean_pskel* inactive_parser_;
    ::fhir::string_pskel* version_parser_;
    ::fhir::code_pskel* code_parser_;
    ::fhir::string_pskel* display_parser_;
    ::fhir::ValueSet_Designation_pskel* designation_parser_;
    ::fhir::ValueSet_Contains_pskel* contains_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::ValueSet_Contains_pskel::*func) (
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
}

#include <xsde/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // VALUESET_PSKEL_HXX