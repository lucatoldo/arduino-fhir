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

#ifndef COMMUNICATION_PSKEL_HXX
#define COMMUNICATION_PSKEL_HXX

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
  class Communication_pskel;
  class Communication_Payload_pskel;
  class EventStatus_list_pskel;
  class EventStatus_pskel;
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
  class Communication_pskel: public ::fhir::DomainResource_pskel
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
    instantiatesCanonical ();

    virtual void
    instantiatesUri ();

    virtual void
    basedOn ();

    virtual void
    partOf ();

    virtual void
    inResponseTo ();

    virtual void
    status ();

    virtual void
    statusReason ();

    virtual void
    category ();

    virtual void
    priority ();

    virtual void
    medium ();

    virtual void
    subject ();

    virtual void
    topic ();

    virtual void
    about ();

    virtual void
    encounter ();

    virtual void
    sent ();

    virtual void
    received ();

    virtual void
    recipient ();

    virtual void
    sender ();

    virtual void
    reasonCode ();

    virtual void
    reasonReference ();

    virtual void
    payload ();

    virtual void
    note ();

    virtual void
    post_Communication ();

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
             ::fhir::canonical_pskel& /* instantiatesCanonical */,
             ::fhir::uri_pskel& /* instantiatesUri */,
             ::fhir::Reference_pskel& /* basedOn */,
             ::fhir::Reference_pskel& /* partOf */,
             ::fhir::Reference_pskel& /* inResponseTo */,
             ::fhir::EventStatus_pskel& /* status */,
             ::fhir::CodeableConcept_pskel& /* statusReason */,
             ::fhir::CodeableConcept_pskel& /* category */,
             ::fhir::RequestPriority_pskel& /* priority */,
             ::fhir::CodeableConcept_pskel& /* medium */,
             ::fhir::Reference_pskel& /* subject */,
             ::fhir::CodeableConcept_pskel& /* topic */,
             ::fhir::Reference_pskel& /* about */,
             ::fhir::Reference_pskel& /* encounter */,
             ::fhir::dateTime_pskel& /* sent */,
             ::fhir::dateTime_pskel& /* received */,
             ::fhir::Reference_pskel& /* recipient */,
             ::fhir::Reference_pskel& /* sender */,
             ::fhir::CodeableConcept_pskel& /* reasonCode */,
             ::fhir::Reference_pskel& /* reasonReference */,
             ::fhir::Communication_Payload_pskel& /* payload */,
             ::fhir::Annotation_pskel& /* note */);

    // Individual element parsers.
    //
    void
    identifier_parser (::fhir::Identifier_pskel&);

    void
    instantiatesCanonical_parser (::fhir::canonical_pskel&);

    void
    instantiatesUri_parser (::fhir::uri_pskel&);

    void
    basedOn_parser (::fhir::Reference_pskel&);

    void
    partOf_parser (::fhir::Reference_pskel&);

    void
    inResponseTo_parser (::fhir::Reference_pskel&);

    void
    status_parser (::fhir::EventStatus_pskel&);

    void
    statusReason_parser (::fhir::CodeableConcept_pskel&);

    void
    category_parser (::fhir::CodeableConcept_pskel&);

    void
    priority_parser (::fhir::RequestPriority_pskel&);

    void
    medium_parser (::fhir::CodeableConcept_pskel&);

    void
    subject_parser (::fhir::Reference_pskel&);

    void
    topic_parser (::fhir::CodeableConcept_pskel&);

    void
    about_parser (::fhir::Reference_pskel&);

    void
    encounter_parser (::fhir::Reference_pskel&);

    void
    sent_parser (::fhir::dateTime_pskel&);

    void
    received_parser (::fhir::dateTime_pskel&);

    void
    recipient_parser (::fhir::Reference_pskel&);

    void
    sender_parser (::fhir::Reference_pskel&);

    void
    reasonCode_parser (::fhir::CodeableConcept_pskel&);

    void
    reasonReference_parser (::fhir::Reference_pskel&);

    void
    payload_parser (::fhir::Communication_Payload_pskel&);

    void
    note_parser (::fhir::Annotation_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    Communication_pskel (::fhir::DomainResource_pskel* tiein);

    // Implementation details.
    //
    protected:
    Communication_pskel* Communication_impl_;
    Communication_pskel (Communication_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::Identifier_pskel* identifier_parser_;
    ::fhir::canonical_pskel* instantiatesCanonical_parser_;
    ::fhir::uri_pskel* instantiatesUri_parser_;
    ::fhir::Reference_pskel* basedOn_parser_;
    ::fhir::Reference_pskel* partOf_parser_;
    ::fhir::Reference_pskel* inResponseTo_parser_;
    ::fhir::EventStatus_pskel* status_parser_;
    ::fhir::CodeableConcept_pskel* statusReason_parser_;
    ::fhir::CodeableConcept_pskel* category_parser_;
    ::fhir::RequestPriority_pskel* priority_parser_;
    ::fhir::CodeableConcept_pskel* medium_parser_;
    ::fhir::Reference_pskel* subject_parser_;
    ::fhir::CodeableConcept_pskel* topic_parser_;
    ::fhir::Reference_pskel* about_parser_;
    ::fhir::Reference_pskel* encounter_parser_;
    ::fhir::dateTime_pskel* sent_parser_;
    ::fhir::dateTime_pskel* received_parser_;
    ::fhir::Reference_pskel* recipient_parser_;
    ::fhir::Reference_pskel* sender_parser_;
    ::fhir::CodeableConcept_pskel* reasonCode_parser_;
    ::fhir::Reference_pskel* reasonReference_parser_;
    ::fhir::Communication_Payload_pskel* payload_parser_;
    ::fhir::Annotation_pskel* note_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::Communication_pskel::*func) (
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

  class Communication_Payload_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    contentString ();

    virtual void
    contentAttachment ();

    virtual void
    contentReference ();

    virtual void
    post_Communication_Payload ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::string_pskel& /* contentString */,
             ::fhir::Attachment_pskel& /* contentAttachment */,
             ::fhir::Reference_pskel& /* contentReference */);

    // Individual element parsers.
    //
    void
    contentString_parser (::fhir::string_pskel&);

    void
    contentAttachment_parser (::fhir::Attachment_pskel&);

    void
    contentReference_parser (::fhir::Reference_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    Communication_Payload_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    Communication_Payload_pskel* Communication_Payload_impl_;
    Communication_Payload_pskel (Communication_Payload_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::string_pskel* contentString_parser_;
    ::fhir::Attachment_pskel* contentAttachment_parser_;
    ::fhir::Reference_pskel* contentReference_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::Communication_Payload_pskel::*func) (
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

  class EventStatus_list_pskel: public ::fhir::code_primitive_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    virtual void
    post_EventStatus_list ();

    // Constructor.
    //
    EventStatus_list_pskel (::fhir::code_primitive_pskel* tiein);

    // Implementation details.
    //
    protected:
    EventStatus_list_pskel* EventStatus_list_impl_;
    EventStatus_list_pskel (EventStatus_list_pskel*, void*);

    protected:
    static const char* const _xsde_EventStatus_list_pskel_enums_[8UL];
  };

  class EventStatus_pskel: public ::fhir::Element_pskel
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
    post_EventStatus ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::EventStatus_list_pskel& /* value */);

    // Individual attribute parsers.
    //
    void
    value_parser (::fhir::EventStatus_list_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    EventStatus_pskel (::fhir::Element_pskel* tiein);

    // Implementation details.
    //
    protected:
    EventStatus_pskel* EventStatus_impl_;
    EventStatus_pskel (EventStatus_pskel*, void*);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    protected:
    ::fhir::EventStatus_list_pskel* value_parser_;
  };
}

#include <xsde/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // COMMUNICATION_PSKEL_HXX