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

#ifndef DOCUMENTREFERENCE_PSKEL_HXX
#define DOCUMENTREFERENCE_PSKEL_HXX

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
  class DocumentReference_pskel;
  class DocumentReference_RelatesTo_pskel;
  class DocumentReference_Content_pskel;
  class DocumentReference_Context_pskel;
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
  class DocumentReference_pskel: public ::fhir::DomainResource_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    masterIdentifier ();

    virtual void
    identifier ();

    virtual void
    status ();

    virtual void
    docStatus ();

    virtual void
    type ();

    virtual void
    category ();

    virtual void
    subject ();

    virtual void
    date ();

    virtual void
    author ();

    virtual void
    authenticator ();

    virtual void
    custodian ();

    virtual void
    relatesTo ();

    virtual void
    description ();

    virtual void
    securityLabel ();

    virtual void
    content ();

    virtual void
    context ();

    virtual void
    post_DocumentReference ();

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
             ::fhir::Identifier_pskel& /* masterIdentifier */,
             ::fhir::Identifier_pskel& /* identifier */,
             ::fhir::DocumentReferenceStatus_pskel& /* status */,
             ::fhir::CompositionStatus_pskel& /* docStatus */,
             ::fhir::CodeableConcept_pskel& /* type */,
             ::fhir::CodeableConcept_pskel& /* category */,
             ::fhir::Reference_pskel& /* subject */,
             ::fhir::instant_pskel& /* date */,
             ::fhir::Reference_pskel& /* author */,
             ::fhir::Reference_pskel& /* authenticator */,
             ::fhir::Reference_pskel& /* custodian */,
             ::fhir::DocumentReference_RelatesTo_pskel& /* relatesTo */,
             ::fhir::string_pskel& /* description */,
             ::fhir::CodeableConcept_pskel& /* securityLabel */,
             ::fhir::DocumentReference_Content_pskel& /* content */,
             ::fhir::DocumentReference_Context_pskel& /* context */);

    // Individual element parsers.
    //
    void
    masterIdentifier_parser (::fhir::Identifier_pskel&);

    void
    identifier_parser (::fhir::Identifier_pskel&);

    void
    status_parser (::fhir::DocumentReferenceStatus_pskel&);

    void
    docStatus_parser (::fhir::CompositionStatus_pskel&);

    void
    type_parser (::fhir::CodeableConcept_pskel&);

    void
    category_parser (::fhir::CodeableConcept_pskel&);

    void
    subject_parser (::fhir::Reference_pskel&);

    void
    date_parser (::fhir::instant_pskel&);

    void
    author_parser (::fhir::Reference_pskel&);

    void
    authenticator_parser (::fhir::Reference_pskel&);

    void
    custodian_parser (::fhir::Reference_pskel&);

    void
    relatesTo_parser (::fhir::DocumentReference_RelatesTo_pskel&);

    void
    description_parser (::fhir::string_pskel&);

    void
    securityLabel_parser (::fhir::CodeableConcept_pskel&);

    void
    content_parser (::fhir::DocumentReference_Content_pskel&);

    void
    context_parser (::fhir::DocumentReference_Context_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    DocumentReference_pskel (::fhir::DomainResource_pskel* tiein);

    // Implementation details.
    //
    protected:
    DocumentReference_pskel* DocumentReference_impl_;
    DocumentReference_pskel (DocumentReference_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::Identifier_pskel* masterIdentifier_parser_;
    ::fhir::Identifier_pskel* identifier_parser_;
    ::fhir::DocumentReferenceStatus_pskel* status_parser_;
    ::fhir::CompositionStatus_pskel* docStatus_parser_;
    ::fhir::CodeableConcept_pskel* type_parser_;
    ::fhir::CodeableConcept_pskel* category_parser_;
    ::fhir::Reference_pskel* subject_parser_;
    ::fhir::instant_pskel* date_parser_;
    ::fhir::Reference_pskel* author_parser_;
    ::fhir::Reference_pskel* authenticator_parser_;
    ::fhir::Reference_pskel* custodian_parser_;
    ::fhir::DocumentReference_RelatesTo_pskel* relatesTo_parser_;
    ::fhir::string_pskel* description_parser_;
    ::fhir::CodeableConcept_pskel* securityLabel_parser_;
    ::fhir::DocumentReference_Content_pskel* content_parser_;
    ::fhir::DocumentReference_Context_pskel* context_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::DocumentReference_pskel::*func) (
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

  class DocumentReference_RelatesTo_pskel: public ::fhir::BackboneElement_pskel
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
    target ();

    virtual void
    post_DocumentReference_RelatesTo ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::DocumentRelationshipType_pskel& /* code */,
             ::fhir::Reference_pskel& /* target */);

    // Individual element parsers.
    //
    void
    code_parser (::fhir::DocumentRelationshipType_pskel&);

    void
    target_parser (::fhir::Reference_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    DocumentReference_RelatesTo_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    DocumentReference_RelatesTo_pskel* DocumentReference_RelatesTo_impl_;
    DocumentReference_RelatesTo_pskel (DocumentReference_RelatesTo_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::DocumentRelationshipType_pskel* code_parser_;
    ::fhir::Reference_pskel* target_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::DocumentReference_RelatesTo_pskel::*func) (
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

  class DocumentReference_Content_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    attachment ();

    virtual void
    format ();

    virtual void
    post_DocumentReference_Content ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::Attachment_pskel& /* attachment */,
             ::fhir::Coding_pskel& /* format */);

    // Individual element parsers.
    //
    void
    attachment_parser (::fhir::Attachment_pskel&);

    void
    format_parser (::fhir::Coding_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    DocumentReference_Content_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    DocumentReference_Content_pskel* DocumentReference_Content_impl_;
    DocumentReference_Content_pskel (DocumentReference_Content_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::Attachment_pskel* attachment_parser_;
    ::fhir::Coding_pskel* format_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::DocumentReference_Content_pskel::*func) (
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

  class DocumentReference_Context_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    encounter ();

    virtual void
    event ();

    virtual void
    period ();

    virtual void
    facilityType ();

    virtual void
    practiceSetting ();

    virtual void
    sourcePatientInfo ();

    virtual void
    related ();

    virtual void
    post_DocumentReference_Context ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::Reference_pskel& /* encounter */,
             ::fhir::CodeableConcept_pskel& /* event */,
             ::fhir::Period_pskel& /* period */,
             ::fhir::CodeableConcept_pskel& /* facilityType */,
             ::fhir::CodeableConcept_pskel& /* practiceSetting */,
             ::fhir::Reference_pskel& /* sourcePatientInfo */,
             ::fhir::Reference_pskel& /* related */);

    // Individual element parsers.
    //
    void
    encounter_parser (::fhir::Reference_pskel&);

    void
    event_parser (::fhir::CodeableConcept_pskel&);

    void
    period_parser (::fhir::Period_pskel&);

    void
    facilityType_parser (::fhir::CodeableConcept_pskel&);

    void
    practiceSetting_parser (::fhir::CodeableConcept_pskel&);

    void
    sourcePatientInfo_parser (::fhir::Reference_pskel&);

    void
    related_parser (::fhir::Reference_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    DocumentReference_Context_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    DocumentReference_Context_pskel* DocumentReference_Context_impl_;
    DocumentReference_Context_pskel (DocumentReference_Context_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::Reference_pskel* encounter_parser_;
    ::fhir::CodeableConcept_pskel* event_parser_;
    ::fhir::Period_pskel* period_parser_;
    ::fhir::CodeableConcept_pskel* facilityType_parser_;
    ::fhir::CodeableConcept_pskel* practiceSetting_parser_;
    ::fhir::Reference_pskel* sourcePatientInfo_parser_;
    ::fhir::Reference_pskel* related_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::DocumentReference_Context_pskel::*func) (
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

#endif // DOCUMENTREFERENCE_PSKEL_HXX
