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

#ifndef EFFECTEVIDENCESYNTHESIS_PSKEL_HXX
#define EFFECTEVIDENCESYNTHESIS_PSKEL_HXX

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
  class EffectEvidenceSynthesis_pskel;
  class EffectEvidenceSynthesis_SampleSize_pskel;
  class EffectEvidenceSynthesis_ResultsByExposure_pskel;
  class EffectEvidenceSynthesis_EffectEstimate_pskel;
  class EffectEvidenceSynthesis_PrecisionEstimate_pskel;
  class EffectEvidenceSynthesis_Certainty_pskel;
  class EffectEvidenceSynthesis_CertaintySubcomponent_pskel;
  class ExposureState_list_pskel;
  class ExposureState_pskel;
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
  class EffectEvidenceSynthesis_pskel: public ::fhir::DomainResource_pskel
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
    date ();

    virtual void
    publisher ();

    virtual void
    contact ();

    virtual void
    description ();

    virtual void
    note ();

    virtual void
    useContext ();

    virtual void
    jurisdiction ();

    virtual void
    copyright ();

    virtual void
    approvalDate ();

    virtual void
    lastReviewDate ();

    virtual void
    effectivePeriod ();

    virtual void
    topic ();

    virtual void
    author ();

    virtual void
    editor ();

    virtual void
    reviewer ();

    virtual void
    endorser ();

    virtual void
    relatedArtifact ();

    virtual void
    synthesisType ();

    virtual void
    studyType ();

    virtual void
    population ();

    virtual void
    exposure ();

    virtual void
    exposureAlternative ();

    virtual void
    outcome ();

    virtual void
    sampleSize ();

    virtual void
    resultsByExposure ();

    virtual void
    effectEstimate ();

    virtual void
    certainty ();

    virtual void
    post_EffectEvidenceSynthesis ();

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
             ::fhir::dateTime_pskel& /* date */,
             ::fhir::string_pskel& /* publisher */,
             ::fhir::ContactDetail_pskel& /* contact */,
             ::fhir::markdown_pskel& /* description */,
             ::fhir::Annotation_pskel& /* note */,
             ::fhir::UsageContext_pskel& /* useContext */,
             ::fhir::CodeableConcept_pskel& /* jurisdiction */,
             ::fhir::markdown_pskel& /* copyright */,
             ::fhir::date_pskel& /* approvalDate */,
             ::fhir::date_pskel& /* lastReviewDate */,
             ::fhir::Period_pskel& /* effectivePeriod */,
             ::fhir::CodeableConcept_pskel& /* topic */,
             ::fhir::ContactDetail_pskel& /* author */,
             ::fhir::ContactDetail_pskel& /* editor */,
             ::fhir::ContactDetail_pskel& /* reviewer */,
             ::fhir::ContactDetail_pskel& /* endorser */,
             ::fhir::RelatedArtifact_pskel& /* relatedArtifact */,
             ::fhir::CodeableConcept_pskel& /* synthesisType */,
             ::fhir::CodeableConcept_pskel& /* studyType */,
             ::fhir::Reference_pskel& /* population */,
             ::fhir::Reference_pskel& /* exposure */,
             ::fhir::Reference_pskel& /* exposureAlternative */,
             ::fhir::Reference_pskel& /* outcome */,
             ::fhir::EffectEvidenceSynthesis_SampleSize_pskel& /* sampleSize */,
             ::fhir::EffectEvidenceSynthesis_ResultsByExposure_pskel& /* resultsByExposure */,
             ::fhir::EffectEvidenceSynthesis_EffectEstimate_pskel& /* effectEstimate */,
             ::fhir::EffectEvidenceSynthesis_Certainty_pskel& /* certainty */);

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
    date_parser (::fhir::dateTime_pskel&);

    void
    publisher_parser (::fhir::string_pskel&);

    void
    contact_parser (::fhir::ContactDetail_pskel&);

    void
    description_parser (::fhir::markdown_pskel&);

    void
    note_parser (::fhir::Annotation_pskel&);

    void
    useContext_parser (::fhir::UsageContext_pskel&);

    void
    jurisdiction_parser (::fhir::CodeableConcept_pskel&);

    void
    copyright_parser (::fhir::markdown_pskel&);

    void
    approvalDate_parser (::fhir::date_pskel&);

    void
    lastReviewDate_parser (::fhir::date_pskel&);

    void
    effectivePeriod_parser (::fhir::Period_pskel&);

    void
    topic_parser (::fhir::CodeableConcept_pskel&);

    void
    author_parser (::fhir::ContactDetail_pskel&);

    void
    editor_parser (::fhir::ContactDetail_pskel&);

    void
    reviewer_parser (::fhir::ContactDetail_pskel&);

    void
    endorser_parser (::fhir::ContactDetail_pskel&);

    void
    relatedArtifact_parser (::fhir::RelatedArtifact_pskel&);

    void
    synthesisType_parser (::fhir::CodeableConcept_pskel&);

    void
    studyType_parser (::fhir::CodeableConcept_pskel&);

    void
    population_parser (::fhir::Reference_pskel&);

    void
    exposure_parser (::fhir::Reference_pskel&);

    void
    exposureAlternative_parser (::fhir::Reference_pskel&);

    void
    outcome_parser (::fhir::Reference_pskel&);

    void
    sampleSize_parser (::fhir::EffectEvidenceSynthesis_SampleSize_pskel&);

    void
    resultsByExposure_parser (::fhir::EffectEvidenceSynthesis_ResultsByExposure_pskel&);

    void
    effectEstimate_parser (::fhir::EffectEvidenceSynthesis_EffectEstimate_pskel&);

    void
    certainty_parser (::fhir::EffectEvidenceSynthesis_Certainty_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    EffectEvidenceSynthesis_pskel (::fhir::DomainResource_pskel* tiein);

    // Implementation details.
    //
    protected:
    EffectEvidenceSynthesis_pskel* EffectEvidenceSynthesis_impl_;
    EffectEvidenceSynthesis_pskel (EffectEvidenceSynthesis_pskel*, void*);

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
    ::fhir::dateTime_pskel* date_parser_;
    ::fhir::string_pskel* publisher_parser_;
    ::fhir::ContactDetail_pskel* contact_parser_;
    ::fhir::markdown_pskel* description_parser_;
    ::fhir::Annotation_pskel* note_parser_;
    ::fhir::UsageContext_pskel* useContext_parser_;
    ::fhir::CodeableConcept_pskel* jurisdiction_parser_;
    ::fhir::markdown_pskel* copyright_parser_;
    ::fhir::date_pskel* approvalDate_parser_;
    ::fhir::date_pskel* lastReviewDate_parser_;
    ::fhir::Period_pskel* effectivePeriod_parser_;
    ::fhir::CodeableConcept_pskel* topic_parser_;
    ::fhir::ContactDetail_pskel* author_parser_;
    ::fhir::ContactDetail_pskel* editor_parser_;
    ::fhir::ContactDetail_pskel* reviewer_parser_;
    ::fhir::ContactDetail_pskel* endorser_parser_;
    ::fhir::RelatedArtifact_pskel* relatedArtifact_parser_;
    ::fhir::CodeableConcept_pskel* synthesisType_parser_;
    ::fhir::CodeableConcept_pskel* studyType_parser_;
    ::fhir::Reference_pskel* population_parser_;
    ::fhir::Reference_pskel* exposure_parser_;
    ::fhir::Reference_pskel* exposureAlternative_parser_;
    ::fhir::Reference_pskel* outcome_parser_;
    ::fhir::EffectEvidenceSynthesis_SampleSize_pskel* sampleSize_parser_;
    ::fhir::EffectEvidenceSynthesis_ResultsByExposure_pskel* resultsByExposure_parser_;
    ::fhir::EffectEvidenceSynthesis_EffectEstimate_pskel* effectEstimate_parser_;
    ::fhir::EffectEvidenceSynthesis_Certainty_pskel* certainty_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::EffectEvidenceSynthesis_pskel::*func) (
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

  class EffectEvidenceSynthesis_SampleSize_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    description ();

    virtual void
    numberOfStudies ();

    virtual void
    numberOfParticipants ();

    virtual void
    post_EffectEvidenceSynthesis_SampleSize ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::string_pskel& /* description */,
             ::fhir::integer_pskel& /* numberOfStudies */,
             ::fhir::integer_pskel& /* numberOfParticipants */);

    // Individual element parsers.
    //
    void
    description_parser (::fhir::string_pskel&);

    void
    numberOfStudies_parser (::fhir::integer_pskel&);

    void
    numberOfParticipants_parser (::fhir::integer_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    EffectEvidenceSynthesis_SampleSize_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    EffectEvidenceSynthesis_SampleSize_pskel* EffectEvidenceSynthesis_SampleSize_impl_;
    EffectEvidenceSynthesis_SampleSize_pskel (EffectEvidenceSynthesis_SampleSize_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::string_pskel* description_parser_;
    ::fhir::integer_pskel* numberOfStudies_parser_;
    ::fhir::integer_pskel* numberOfParticipants_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::EffectEvidenceSynthesis_SampleSize_pskel::*func) (
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

  class EffectEvidenceSynthesis_ResultsByExposure_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    description ();

    virtual void
    exposureState ();

    virtual void
    variantState ();

    virtual void
    riskEvidenceSynthesis ();

    virtual void
    post_EffectEvidenceSynthesis_ResultsByExposure ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::string_pskel& /* description */,
             ::fhir::ExposureState_pskel& /* exposureState */,
             ::fhir::CodeableConcept_pskel& /* variantState */,
             ::fhir::Reference_pskel& /* riskEvidenceSynthesis */);

    // Individual element parsers.
    //
    void
    description_parser (::fhir::string_pskel&);

    void
    exposureState_parser (::fhir::ExposureState_pskel&);

    void
    variantState_parser (::fhir::CodeableConcept_pskel&);

    void
    riskEvidenceSynthesis_parser (::fhir::Reference_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    EffectEvidenceSynthesis_ResultsByExposure_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    EffectEvidenceSynthesis_ResultsByExposure_pskel* EffectEvidenceSynthesis_ResultsByExposure_impl_;
    EffectEvidenceSynthesis_ResultsByExposure_pskel (EffectEvidenceSynthesis_ResultsByExposure_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::string_pskel* description_parser_;
    ::fhir::ExposureState_pskel* exposureState_parser_;
    ::fhir::CodeableConcept_pskel* variantState_parser_;
    ::fhir::Reference_pskel* riskEvidenceSynthesis_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::EffectEvidenceSynthesis_ResultsByExposure_pskel::*func) (
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

  class EffectEvidenceSynthesis_EffectEstimate_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    description ();

    virtual void
    type ();

    virtual void
    variantState ();

    virtual void
    value ();

    virtual void
    unitOfMeasure ();

    virtual void
    precisionEstimate ();

    virtual void
    post_EffectEvidenceSynthesis_EffectEstimate ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::string_pskel& /* description */,
             ::fhir::CodeableConcept_pskel& /* type */,
             ::fhir::CodeableConcept_pskel& /* variantState */,
             ::fhir::decimal_pskel& /* value */,
             ::fhir::CodeableConcept_pskel& /* unitOfMeasure */,
             ::fhir::EffectEvidenceSynthesis_PrecisionEstimate_pskel& /* precisionEstimate */);

    // Individual element parsers.
    //
    void
    description_parser (::fhir::string_pskel&);

    void
    type_parser (::fhir::CodeableConcept_pskel&);

    void
    variantState_parser (::fhir::CodeableConcept_pskel&);

    void
    value_parser (::fhir::decimal_pskel&);

    void
    unitOfMeasure_parser (::fhir::CodeableConcept_pskel&);

    void
    precisionEstimate_parser (::fhir::EffectEvidenceSynthesis_PrecisionEstimate_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    EffectEvidenceSynthesis_EffectEstimate_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    EffectEvidenceSynthesis_EffectEstimate_pskel* EffectEvidenceSynthesis_EffectEstimate_impl_;
    EffectEvidenceSynthesis_EffectEstimate_pskel (EffectEvidenceSynthesis_EffectEstimate_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::string_pskel* description_parser_;
    ::fhir::CodeableConcept_pskel* type_parser_;
    ::fhir::CodeableConcept_pskel* variantState_parser_;
    ::fhir::decimal_pskel* value_parser_;
    ::fhir::CodeableConcept_pskel* unitOfMeasure_parser_;
    ::fhir::EffectEvidenceSynthesis_PrecisionEstimate_pskel* precisionEstimate_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::EffectEvidenceSynthesis_EffectEstimate_pskel::*func) (
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

  class EffectEvidenceSynthesis_PrecisionEstimate_pskel: public ::fhir::BackboneElement_pskel
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
    level ();

    virtual void
    from ();

    virtual void
    to ();

    virtual void
    post_EffectEvidenceSynthesis_PrecisionEstimate ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::CodeableConcept_pskel& /* type */,
             ::fhir::decimal_pskel& /* level */,
             ::fhir::decimal_pskel& /* from */,
             ::fhir::decimal_pskel& /* to */);

    // Individual element parsers.
    //
    void
    type_parser (::fhir::CodeableConcept_pskel&);

    void
    level_parser (::fhir::decimal_pskel&);

    void
    from_parser (::fhir::decimal_pskel&);

    void
    to_parser (::fhir::decimal_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    EffectEvidenceSynthesis_PrecisionEstimate_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    EffectEvidenceSynthesis_PrecisionEstimate_pskel* EffectEvidenceSynthesis_PrecisionEstimate_impl_;
    EffectEvidenceSynthesis_PrecisionEstimate_pskel (EffectEvidenceSynthesis_PrecisionEstimate_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::CodeableConcept_pskel* type_parser_;
    ::fhir::decimal_pskel* level_parser_;
    ::fhir::decimal_pskel* from_parser_;
    ::fhir::decimal_pskel* to_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::EffectEvidenceSynthesis_PrecisionEstimate_pskel::*func) (
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

  class EffectEvidenceSynthesis_Certainty_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    rating ();

    virtual void
    note ();

    virtual void
    certaintySubcomponent ();

    virtual void
    post_EffectEvidenceSynthesis_Certainty ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::CodeableConcept_pskel& /* rating */,
             ::fhir::Annotation_pskel& /* note */,
             ::fhir::EffectEvidenceSynthesis_CertaintySubcomponent_pskel& /* certaintySubcomponent */);

    // Individual element parsers.
    //
    void
    rating_parser (::fhir::CodeableConcept_pskel&);

    void
    note_parser (::fhir::Annotation_pskel&);

    void
    certaintySubcomponent_parser (::fhir::EffectEvidenceSynthesis_CertaintySubcomponent_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    EffectEvidenceSynthesis_Certainty_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    EffectEvidenceSynthesis_Certainty_pskel* EffectEvidenceSynthesis_Certainty_impl_;
    EffectEvidenceSynthesis_Certainty_pskel (EffectEvidenceSynthesis_Certainty_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::CodeableConcept_pskel* rating_parser_;
    ::fhir::Annotation_pskel* note_parser_;
    ::fhir::EffectEvidenceSynthesis_CertaintySubcomponent_pskel* certaintySubcomponent_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::EffectEvidenceSynthesis_Certainty_pskel::*func) (
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

  class EffectEvidenceSynthesis_CertaintySubcomponent_pskel: public ::fhir::BackboneElement_pskel
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
    rating ();

    virtual void
    note ();

    virtual void
    post_EffectEvidenceSynthesis_CertaintySubcomponent ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::CodeableConcept_pskel& /* type */,
             ::fhir::CodeableConcept_pskel& /* rating */,
             ::fhir::Annotation_pskel& /* note */);

    // Individual element parsers.
    //
    void
    type_parser (::fhir::CodeableConcept_pskel&);

    void
    rating_parser (::fhir::CodeableConcept_pskel&);

    void
    note_parser (::fhir::Annotation_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    EffectEvidenceSynthesis_CertaintySubcomponent_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    EffectEvidenceSynthesis_CertaintySubcomponent_pskel* EffectEvidenceSynthesis_CertaintySubcomponent_impl_;
    EffectEvidenceSynthesis_CertaintySubcomponent_pskel (EffectEvidenceSynthesis_CertaintySubcomponent_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::CodeableConcept_pskel* type_parser_;
    ::fhir::CodeableConcept_pskel* rating_parser_;
    ::fhir::Annotation_pskel* note_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::EffectEvidenceSynthesis_CertaintySubcomponent_pskel::*func) (
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

  class ExposureState_list_pskel: public ::fhir::code_primitive_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    virtual void
    post_ExposureState_list ();

    // Constructor.
    //
    ExposureState_list_pskel (::fhir::code_primitive_pskel* tiein);

    // Implementation details.
    //
    protected:
    ExposureState_list_pskel* ExposureState_list_impl_;
    ExposureState_list_pskel (ExposureState_list_pskel*, void*);

    protected:
    static const char* const _xsde_ExposureState_list_pskel_enums_[2UL];
  };

  class ExposureState_pskel: public ::fhir::Element_pskel
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
    post_ExposureState ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::ExposureState_list_pskel& /* value */);

    // Individual attribute parsers.
    //
    void
    value_parser (::fhir::ExposureState_list_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    ExposureState_pskel (::fhir::Element_pskel* tiein);

    // Implementation details.
    //
    protected:
    ExposureState_pskel* ExposureState_impl_;
    ExposureState_pskel (ExposureState_pskel*, void*);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    protected:
    ::fhir::ExposureState_list_pskel* value_parser_;
  };
}

#include <xsde/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // EFFECTEVIDENCESYNTHESIS_PSKEL_HXX