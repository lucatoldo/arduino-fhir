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

#ifndef CONSENT_PSKEL_HXX
#define CONSENT_PSKEL_HXX

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
  class Consent_pskel;
  class Consent_Policy_pskel;
  class Consent_Verification_pskel;
  class Consent_Provision_pskel;
  class Consent_Actor_pskel;
  class Consent_Data_pskel;
  class ConsentProvisionType_list_pskel;
  class ConsentProvisionType_pskel;
  class ConsentDataMeaning_list_pskel;
  class ConsentDataMeaning_pskel;
  class ConsentState_list_pskel;
  class ConsentState_pskel;
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
  class Consent_pskel: public ::fhir::DomainResource_pskel
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
    status ();

    virtual void
    scope ();

    virtual void
    category ();

    virtual void
    patient ();

    virtual void
    dateTime ();

    virtual void
    performer ();

    virtual void
    organization ();

    virtual void
    sourceAttachment ();

    virtual void
    sourceReference ();

    virtual void
    policy ();

    virtual void
    policyRule ();

    virtual void
    verification ();

    virtual void
    provision ();

    virtual void
    post_Consent ();

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
             ::fhir::ConsentState_pskel& /* status */,
             ::fhir::CodeableConcept_pskel& /* scope */,
             ::fhir::CodeableConcept_pskel& /* category */,
             ::fhir::Reference_pskel& /* patient */,
             ::fhir::dateTime_pskel& /* dateTime */,
             ::fhir::Reference_pskel& /* performer */,
             ::fhir::Reference_pskel& /* organization */,
             ::fhir::Attachment_pskel& /* sourceAttachment */,
             ::fhir::Reference_pskel& /* sourceReference */,
             ::fhir::Consent_Policy_pskel& /* policy */,
             ::fhir::CodeableConcept_pskel& /* policyRule */,
             ::fhir::Consent_Verification_pskel& /* verification */,
             ::fhir::Consent_Provision_pskel& /* provision */);

    // Individual element parsers.
    //
    void
    identifier_parser (::fhir::Identifier_pskel&);

    void
    status_parser (::fhir::ConsentState_pskel&);

    void
    scope_parser (::fhir::CodeableConcept_pskel&);

    void
    category_parser (::fhir::CodeableConcept_pskel&);

    void
    patient_parser (::fhir::Reference_pskel&);

    void
    dateTime_parser (::fhir::dateTime_pskel&);

    void
    performer_parser (::fhir::Reference_pskel&);

    void
    organization_parser (::fhir::Reference_pskel&);

    void
    sourceAttachment_parser (::fhir::Attachment_pskel&);

    void
    sourceReference_parser (::fhir::Reference_pskel&);

    void
    policy_parser (::fhir::Consent_Policy_pskel&);

    void
    policyRule_parser (::fhir::CodeableConcept_pskel&);

    void
    verification_parser (::fhir::Consent_Verification_pskel&);

    void
    provision_parser (::fhir::Consent_Provision_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    Consent_pskel (::fhir::DomainResource_pskel* tiein);

    // Implementation details.
    //
    protected:
    Consent_pskel* Consent_impl_;
    Consent_pskel (Consent_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::Identifier_pskel* identifier_parser_;
    ::fhir::ConsentState_pskel* status_parser_;
    ::fhir::CodeableConcept_pskel* scope_parser_;
    ::fhir::CodeableConcept_pskel* category_parser_;
    ::fhir::Reference_pskel* patient_parser_;
    ::fhir::dateTime_pskel* dateTime_parser_;
    ::fhir::Reference_pskel* performer_parser_;
    ::fhir::Reference_pskel* organization_parser_;
    ::fhir::Attachment_pskel* sourceAttachment_parser_;
    ::fhir::Reference_pskel* sourceReference_parser_;
    ::fhir::Consent_Policy_pskel* policy_parser_;
    ::fhir::CodeableConcept_pskel* policyRule_parser_;
    ::fhir::Consent_Verification_pskel* verification_parser_;
    ::fhir::Consent_Provision_pskel* provision_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::Consent_pskel::*func) (
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

  class Consent_Policy_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    authority ();

    virtual void
    uri ();

    virtual void
    post_Consent_Policy ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::uri_pskel& /* authority */,
             ::fhir::uri_pskel& /* uri */);

    // Individual element parsers.
    //
    void
    authority_parser (::fhir::uri_pskel&);

    void
    uri_parser (::fhir::uri_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    Consent_Policy_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    Consent_Policy_pskel* Consent_Policy_impl_;
    Consent_Policy_pskel (Consent_Policy_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::uri_pskel* authority_parser_;
    ::fhir::uri_pskel* uri_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::Consent_Policy_pskel::*func) (
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

  class Consent_Verification_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    verified ();

    virtual void
    verifiedWith ();

    virtual void
    verificationDate ();

    virtual void
    post_Consent_Verification ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::boolean_pskel& /* verified */,
             ::fhir::Reference_pskel& /* verifiedWith */,
             ::fhir::dateTime_pskel& /* verificationDate */);

    // Individual element parsers.
    //
    void
    verified_parser (::fhir::boolean_pskel&);

    void
    verifiedWith_parser (::fhir::Reference_pskel&);

    void
    verificationDate_parser (::fhir::dateTime_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    Consent_Verification_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    Consent_Verification_pskel* Consent_Verification_impl_;
    Consent_Verification_pskel (Consent_Verification_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::boolean_pskel* verified_parser_;
    ::fhir::Reference_pskel* verifiedWith_parser_;
    ::fhir::dateTime_pskel* verificationDate_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::Consent_Verification_pskel::*func) (
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

  class Consent_Provision_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    type ();

    virtual void
    period ();

    virtual void
    actor ();

    virtual void
    action ();

    virtual void
    securityLabel ();

    virtual void
    purpose ();

    virtual void
    class_ ();

    virtual void
    code ();

    virtual void
    dataPeriod ();

    virtual void
    data ();

    virtual void
    provision ();

    virtual void
    post_Consent_Provision ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::ConsentProvisionType_pskel& /* type */,
             ::fhir::Period_pskel& /* period */,
             ::fhir::Consent_Actor_pskel& /* actor */,
             ::fhir::CodeableConcept_pskel& /* action */,
             ::fhir::Coding_pskel& /* securityLabel */,
             ::fhir::Coding_pskel& /* purpose */,
             ::fhir::Coding_pskel& /* class */,
             ::fhir::CodeableConcept_pskel& /* code */,
             ::fhir::Period_pskel& /* dataPeriod */,
             ::fhir::Consent_Data_pskel& /* data */,
             ::fhir::Consent_Provision_pskel& /* provision */);

    // Individual element parsers.
    //
    void
    type_parser (::fhir::ConsentProvisionType_pskel&);

    void
    period_parser (::fhir::Period_pskel&);

    void
    actor_parser (::fhir::Consent_Actor_pskel&);

    void
    action_parser (::fhir::CodeableConcept_pskel&);

    void
    securityLabel_parser (::fhir::Coding_pskel&);

    void
    purpose_parser (::fhir::Coding_pskel&);

    void
    class__parser (::fhir::Coding_pskel&);

    void
    code_parser (::fhir::CodeableConcept_pskel&);

    void
    dataPeriod_parser (::fhir::Period_pskel&);

    void
    data_parser (::fhir::Consent_Data_pskel&);

    void
    provision_parser (::fhir::Consent_Provision_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    Consent_Provision_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    Consent_Provision_pskel* Consent_Provision_impl_;
    Consent_Provision_pskel (Consent_Provision_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::ConsentProvisionType_pskel* type_parser_;
    ::fhir::Period_pskel* period_parser_;
    ::fhir::Consent_Actor_pskel* actor_parser_;
    ::fhir::CodeableConcept_pskel* action_parser_;
    ::fhir::Coding_pskel* securityLabel_parser_;
    ::fhir::Coding_pskel* purpose_parser_;
    ::fhir::Coding_pskel* class__parser_;
    ::fhir::CodeableConcept_pskel* code_parser_;
    ::fhir::Period_pskel* dataPeriod_parser_;
    ::fhir::Consent_Data_pskel* data_parser_;
    ::fhir::Consent_Provision_pskel* provision_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::Consent_Provision_pskel::*func) (
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

  class Consent_Actor_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    role ();

    virtual void
    reference ();

    virtual void
    post_Consent_Actor ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::CodeableConcept_pskel& /* role */,
             ::fhir::Reference_pskel& /* reference */);

    // Individual element parsers.
    //
    void
    role_parser (::fhir::CodeableConcept_pskel&);

    void
    reference_parser (::fhir::Reference_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    Consent_Actor_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    Consent_Actor_pskel* Consent_Actor_impl_;
    Consent_Actor_pskel (Consent_Actor_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::CodeableConcept_pskel* role_parser_;
    ::fhir::Reference_pskel* reference_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::Consent_Actor_pskel::*func) (
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

  class Consent_Data_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    meaning ();

    virtual void
    reference ();

    virtual void
    post_Consent_Data ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::ConsentDataMeaning_pskel& /* meaning */,
             ::fhir::Reference_pskel& /* reference */);

    // Individual element parsers.
    //
    void
    meaning_parser (::fhir::ConsentDataMeaning_pskel&);

    void
    reference_parser (::fhir::Reference_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    Consent_Data_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    Consent_Data_pskel* Consent_Data_impl_;
    Consent_Data_pskel (Consent_Data_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::ConsentDataMeaning_pskel* meaning_parser_;
    ::fhir::Reference_pskel* reference_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::Consent_Data_pskel::*func) (
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

  class ConsentProvisionType_list_pskel: public ::fhir::code_primitive_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    virtual void
    post_ConsentProvisionType_list ();

    // Constructor.
    //
    ConsentProvisionType_list_pskel (::fhir::code_primitive_pskel* tiein);

    // Implementation details.
    //
    protected:
    ConsentProvisionType_list_pskel* ConsentProvisionType_list_impl_;
    ConsentProvisionType_list_pskel (ConsentProvisionType_list_pskel*, void*);

    protected:
    static const char* const _xsde_ConsentProvisionType_list_pskel_enums_[2UL];
  };

  class ConsentProvisionType_pskel: public ::fhir::Element_pskel
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
    post_ConsentProvisionType ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::ConsentProvisionType_list_pskel& /* value */);

    // Individual attribute parsers.
    //
    void
    value_parser (::fhir::ConsentProvisionType_list_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    ConsentProvisionType_pskel (::fhir::Element_pskel* tiein);

    // Implementation details.
    //
    protected:
    ConsentProvisionType_pskel* ConsentProvisionType_impl_;
    ConsentProvisionType_pskel (ConsentProvisionType_pskel*, void*);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    protected:
    ::fhir::ConsentProvisionType_list_pskel* value_parser_;
  };

  class ConsentDataMeaning_list_pskel: public ::fhir::code_primitive_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    virtual void
    post_ConsentDataMeaning_list ();

    // Constructor.
    //
    ConsentDataMeaning_list_pskel (::fhir::code_primitive_pskel* tiein);

    // Implementation details.
    //
    protected:
    ConsentDataMeaning_list_pskel* ConsentDataMeaning_list_impl_;
    ConsentDataMeaning_list_pskel (ConsentDataMeaning_list_pskel*, void*);

    protected:
    static const char* const _xsde_ConsentDataMeaning_list_pskel_enums_[4UL];
  };

  class ConsentDataMeaning_pskel: public ::fhir::Element_pskel
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
    post_ConsentDataMeaning ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::ConsentDataMeaning_list_pskel& /* value */);

    // Individual attribute parsers.
    //
    void
    value_parser (::fhir::ConsentDataMeaning_list_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    ConsentDataMeaning_pskel (::fhir::Element_pskel* tiein);

    // Implementation details.
    //
    protected:
    ConsentDataMeaning_pskel* ConsentDataMeaning_impl_;
    ConsentDataMeaning_pskel (ConsentDataMeaning_pskel*, void*);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    protected:
    ::fhir::ConsentDataMeaning_list_pskel* value_parser_;
  };

  class ConsentState_list_pskel: public ::fhir::code_primitive_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    virtual void
    post_ConsentState_list ();

    // Constructor.
    //
    ConsentState_list_pskel (::fhir::code_primitive_pskel* tiein);

    // Implementation details.
    //
    protected:
    ConsentState_list_pskel* ConsentState_list_impl_;
    ConsentState_list_pskel (ConsentState_list_pskel*, void*);

    protected:
    static const char* const _xsde_ConsentState_list_pskel_enums_[6UL];
  };

  class ConsentState_pskel: public ::fhir::Element_pskel
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
    post_ConsentState ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::ConsentState_list_pskel& /* value */);

    // Individual attribute parsers.
    //
    void
    value_parser (::fhir::ConsentState_list_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    ConsentState_pskel (::fhir::Element_pskel* tiein);

    // Implementation details.
    //
    protected:
    ConsentState_pskel* ConsentState_impl_;
    ConsentState_pskel (ConsentState_pskel*, void*);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    protected:
    ::fhir::ConsentState_list_pskel* value_parser_;
  };
}

#include <xsde/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // CONSENT_PSKEL_HXX
