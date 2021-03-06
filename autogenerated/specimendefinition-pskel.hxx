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

#ifndef SPECIMENDEFINITION_PSKEL_HXX
#define SPECIMENDEFINITION_PSKEL_HXX

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
  class SpecimenDefinition_pskel;
  class SpecimenDefinition_TypeTested_pskel;
  class SpecimenDefinition_Container_pskel;
  class SpecimenDefinition_Additive_pskel;
  class SpecimenDefinition_Handling_pskel;
  class SpecimenContainedPreference_list_pskel;
  class SpecimenContainedPreference_pskel;
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
  class SpecimenDefinition_pskel: public ::fhir::DomainResource_pskel
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
    typeCollected ();

    virtual void
    patientPreparation ();

    virtual void
    timeAspect ();

    virtual void
    collection ();

    virtual void
    typeTested ();

    virtual void
    post_SpecimenDefinition ();

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
             ::fhir::Identifier_pskel& /* identifier */,
             ::fhir::CodeableConcept_pskel& /* typeCollected */,
             ::fhir::CodeableConcept_pskel& /* patientPreparation */,
             ::fhir::string_pskel& /* timeAspect */,
             ::fhir::CodeableConcept_pskel& /* collection */,
             ::fhir::SpecimenDefinition_TypeTested_pskel& /* typeTested */);

    // Individual element parsers.
    //
    void
    identifier_parser (::fhir::Identifier_pskel&);

    void
    typeCollected_parser (::fhir::CodeableConcept_pskel&);

    void
    patientPreparation_parser (::fhir::CodeableConcept_pskel&);

    void
    timeAspect_parser (::fhir::string_pskel&);

    void
    collection_parser (::fhir::CodeableConcept_pskel&);

    void
    typeTested_parser (::fhir::SpecimenDefinition_TypeTested_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    SpecimenDefinition_pskel (::fhir::DomainResource_pskel* tiein);

    // Implementation details.
    //
    protected:
    SpecimenDefinition_pskel* SpecimenDefinition_impl_;
    SpecimenDefinition_pskel (SpecimenDefinition_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::Identifier_pskel* identifier_parser_;
    ::fhir::CodeableConcept_pskel* typeCollected_parser_;
    ::fhir::CodeableConcept_pskel* patientPreparation_parser_;
    ::fhir::string_pskel* timeAspect_parser_;
    ::fhir::CodeableConcept_pskel* collection_parser_;
    ::fhir::SpecimenDefinition_TypeTested_pskel* typeTested_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::SpecimenDefinition_pskel::*func) (
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

  class SpecimenDefinition_TypeTested_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    isDerived ();

    virtual void
    type ();

    virtual void
    preference ();

    virtual void
    container ();

    virtual void
    requirement ();

    virtual void
    retentionTime ();

    virtual void
    rejectionCriterion ();

    virtual void
    handling ();

    virtual void
    post_SpecimenDefinition_TypeTested ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::boolean_pskel& /* isDerived */,
             ::fhir::CodeableConcept_pskel& /* type */,
             ::fhir::SpecimenContainedPreference_pskel& /* preference */,
             ::fhir::SpecimenDefinition_Container_pskel& /* container */,
             ::fhir::string_pskel& /* requirement */,
             ::fhir::Duration_pskel& /* retentionTime */,
             ::fhir::CodeableConcept_pskel& /* rejectionCriterion */,
             ::fhir::SpecimenDefinition_Handling_pskel& /* handling */);

    // Individual element parsers.
    //
    void
    isDerived_parser (::fhir::boolean_pskel&);

    void
    type_parser (::fhir::CodeableConcept_pskel&);

    void
    preference_parser (::fhir::SpecimenContainedPreference_pskel&);

    void
    container_parser (::fhir::SpecimenDefinition_Container_pskel&);

    void
    requirement_parser (::fhir::string_pskel&);

    void
    retentionTime_parser (::fhir::Duration_pskel&);

    void
    rejectionCriterion_parser (::fhir::CodeableConcept_pskel&);

    void
    handling_parser (::fhir::SpecimenDefinition_Handling_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    SpecimenDefinition_TypeTested_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    SpecimenDefinition_TypeTested_pskel* SpecimenDefinition_TypeTested_impl_;
    SpecimenDefinition_TypeTested_pskel (SpecimenDefinition_TypeTested_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::boolean_pskel* isDerived_parser_;
    ::fhir::CodeableConcept_pskel* type_parser_;
    ::fhir::SpecimenContainedPreference_pskel* preference_parser_;
    ::fhir::SpecimenDefinition_Container_pskel* container_parser_;
    ::fhir::string_pskel* requirement_parser_;
    ::fhir::Duration_pskel* retentionTime_parser_;
    ::fhir::CodeableConcept_pskel* rejectionCriterion_parser_;
    ::fhir::SpecimenDefinition_Handling_pskel* handling_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::SpecimenDefinition_TypeTested_pskel::*func) (
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

  class SpecimenDefinition_Container_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    material ();

    virtual void
    type ();

    virtual void
    cap ();

    virtual void
    description ();

    virtual void
    capacity ();

    virtual void
    minimumVolumeQuantity ();

    virtual void
    minimumVolumeString ();

    virtual void
    additive ();

    virtual void
    preparation ();

    virtual void
    post_SpecimenDefinition_Container ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::CodeableConcept_pskel& /* material */,
             ::fhir::CodeableConcept_pskel& /* type */,
             ::fhir::CodeableConcept_pskel& /* cap */,
             ::fhir::string_pskel& /* description */,
             ::fhir::Quantity_pskel& /* capacity */,
             ::fhir::Quantity_pskel& /* minimumVolumeQuantity */,
             ::fhir::string_pskel& /* minimumVolumeString */,
             ::fhir::SpecimenDefinition_Additive_pskel& /* additive */,
             ::fhir::string_pskel& /* preparation */);

    // Individual element parsers.
    //
    void
    material_parser (::fhir::CodeableConcept_pskel&);

    void
    type_parser (::fhir::CodeableConcept_pskel&);

    void
    cap_parser (::fhir::CodeableConcept_pskel&);

    void
    description_parser (::fhir::string_pskel&);

    void
    capacity_parser (::fhir::Quantity_pskel&);

    void
    minimumVolumeQuantity_parser (::fhir::Quantity_pskel&);

    void
    minimumVolumeString_parser (::fhir::string_pskel&);

    void
    additive_parser (::fhir::SpecimenDefinition_Additive_pskel&);

    void
    preparation_parser (::fhir::string_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    SpecimenDefinition_Container_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    SpecimenDefinition_Container_pskel* SpecimenDefinition_Container_impl_;
    SpecimenDefinition_Container_pskel (SpecimenDefinition_Container_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::CodeableConcept_pskel* material_parser_;
    ::fhir::CodeableConcept_pskel* type_parser_;
    ::fhir::CodeableConcept_pskel* cap_parser_;
    ::fhir::string_pskel* description_parser_;
    ::fhir::Quantity_pskel* capacity_parser_;
    ::fhir::Quantity_pskel* minimumVolumeQuantity_parser_;
    ::fhir::string_pskel* minimumVolumeString_parser_;
    ::fhir::SpecimenDefinition_Additive_pskel* additive_parser_;
    ::fhir::string_pskel* preparation_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::SpecimenDefinition_Container_pskel::*func) (
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

  class SpecimenDefinition_Additive_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    additiveCodeableConcept ();

    virtual void
    additiveReference ();

    virtual void
    post_SpecimenDefinition_Additive ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::CodeableConcept_pskel& /* additiveCodeableConcept */,
             ::fhir::Reference_pskel& /* additiveReference */);

    // Individual element parsers.
    //
    void
    additiveCodeableConcept_parser (::fhir::CodeableConcept_pskel&);

    void
    additiveReference_parser (::fhir::Reference_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    SpecimenDefinition_Additive_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    SpecimenDefinition_Additive_pskel* SpecimenDefinition_Additive_impl_;
    SpecimenDefinition_Additive_pskel (SpecimenDefinition_Additive_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::CodeableConcept_pskel* additiveCodeableConcept_parser_;
    ::fhir::Reference_pskel* additiveReference_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::SpecimenDefinition_Additive_pskel::*func) (
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

  class SpecimenDefinition_Handling_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    temperatureQualifier ();

    virtual void
    temperatureRange ();

    virtual void
    maxDuration ();

    virtual void
    instruction ();

    virtual void
    post_SpecimenDefinition_Handling ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::CodeableConcept_pskel& /* temperatureQualifier */,
             ::fhir::Range_pskel& /* temperatureRange */,
             ::fhir::Duration_pskel& /* maxDuration */,
             ::fhir::string_pskel& /* instruction */);

    // Individual element parsers.
    //
    void
    temperatureQualifier_parser (::fhir::CodeableConcept_pskel&);

    void
    temperatureRange_parser (::fhir::Range_pskel&);

    void
    maxDuration_parser (::fhir::Duration_pskel&);

    void
    instruction_parser (::fhir::string_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    SpecimenDefinition_Handling_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    SpecimenDefinition_Handling_pskel* SpecimenDefinition_Handling_impl_;
    SpecimenDefinition_Handling_pskel (SpecimenDefinition_Handling_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::CodeableConcept_pskel* temperatureQualifier_parser_;
    ::fhir::Range_pskel* temperatureRange_parser_;
    ::fhir::Duration_pskel* maxDuration_parser_;
    ::fhir::string_pskel* instruction_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::SpecimenDefinition_Handling_pskel::*func) (
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

  class SpecimenContainedPreference_list_pskel: public ::fhir::code_primitive_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    virtual void
    post_SpecimenContainedPreference_list ();

    // Constructor.
    //
    SpecimenContainedPreference_list_pskel (::fhir::code_primitive_pskel* tiein);

    // Implementation details.
    //
    protected:
    SpecimenContainedPreference_list_pskel* SpecimenContainedPreference_list_impl_;
    SpecimenContainedPreference_list_pskel (SpecimenContainedPreference_list_pskel*, void*);

    protected:
    static const char* const _xsde_SpecimenContainedPreference_list_pskel_enums_[2UL];
  };

  class SpecimenContainedPreference_pskel: public ::fhir::Element_pskel
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
    post_SpecimenContainedPreference ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::SpecimenContainedPreference_list_pskel& /* value */);

    // Individual attribute parsers.
    //
    void
    value_parser (::fhir::SpecimenContainedPreference_list_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    SpecimenContainedPreference_pskel (::fhir::Element_pskel* tiein);

    // Implementation details.
    //
    protected:
    SpecimenContainedPreference_pskel* SpecimenContainedPreference_impl_;
    SpecimenContainedPreference_pskel (SpecimenContainedPreference_pskel*, void*);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    protected:
    ::fhir::SpecimenContainedPreference_list_pskel* value_parser_;
  };
}

#include <xsde/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // SPECIMENDEFINITION_PSKEL_HXX
