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

#ifndef QUESTIONNAIRE_PSKEL_HXX
#define QUESTIONNAIRE_PSKEL_HXX

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
  class Questionnaire_pskel;
  class Questionnaire_Item_pskel;
  class Questionnaire_EnableWhen_pskel;
  class Questionnaire_AnswerOption_pskel;
  class Questionnaire_Initial_pskel;
  class QuestionnaireItemType_list_pskel;
  class QuestionnaireItemType_pskel;
  class EnableWhenBehavior_list_pskel;
  class EnableWhenBehavior_pskel;
  class QuestionnaireItemOperator_list_pskel;
  class QuestionnaireItemOperator_pskel;
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
  class Questionnaire_pskel: public ::fhir::DomainResource_pskel
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
    derivedFrom ();

    virtual void
    status ();

    virtual void
    experimental ();

    virtual void
    subjectType ();

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
    approvalDate ();

    virtual void
    lastReviewDate ();

    virtual void
    effectivePeriod ();

    virtual void
    code ();

    virtual void
    item ();

    virtual void
    post_Questionnaire ();

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
             ::fhir::canonical_pskel& /* derivedFrom */,
             ::fhir::PublicationStatus_pskel& /* status */,
             ::fhir::boolean_pskel& /* experimental */,
             ::fhir::code_pskel& /* subjectType */,
             ::fhir::dateTime_pskel& /* date */,
             ::fhir::string_pskel& /* publisher */,
             ::fhir::ContactDetail_pskel& /* contact */,
             ::fhir::markdown_pskel& /* description */,
             ::fhir::UsageContext_pskel& /* useContext */,
             ::fhir::CodeableConcept_pskel& /* jurisdiction */,
             ::fhir::markdown_pskel& /* purpose */,
             ::fhir::markdown_pskel& /* copyright */,
             ::fhir::date_pskel& /* approvalDate */,
             ::fhir::date_pskel& /* lastReviewDate */,
             ::fhir::Period_pskel& /* effectivePeriod */,
             ::fhir::Coding_pskel& /* code */,
             ::fhir::Questionnaire_Item_pskel& /* item */);

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
    derivedFrom_parser (::fhir::canonical_pskel&);

    void
    status_parser (::fhir::PublicationStatus_pskel&);

    void
    experimental_parser (::fhir::boolean_pskel&);

    void
    subjectType_parser (::fhir::code_pskel&);

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
    approvalDate_parser (::fhir::date_pskel&);

    void
    lastReviewDate_parser (::fhir::date_pskel&);

    void
    effectivePeriod_parser (::fhir::Period_pskel&);

    void
    code_parser (::fhir::Coding_pskel&);

    void
    item_parser (::fhir::Questionnaire_Item_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    Questionnaire_pskel (::fhir::DomainResource_pskel* tiein);

    // Implementation details.
    //
    protected:
    Questionnaire_pskel* Questionnaire_impl_;
    Questionnaire_pskel (Questionnaire_pskel*, void*);

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
    ::fhir::canonical_pskel* derivedFrom_parser_;
    ::fhir::PublicationStatus_pskel* status_parser_;
    ::fhir::boolean_pskel* experimental_parser_;
    ::fhir::code_pskel* subjectType_parser_;
    ::fhir::dateTime_pskel* date_parser_;
    ::fhir::string_pskel* publisher_parser_;
    ::fhir::ContactDetail_pskel* contact_parser_;
    ::fhir::markdown_pskel* description_parser_;
    ::fhir::UsageContext_pskel* useContext_parser_;
    ::fhir::CodeableConcept_pskel* jurisdiction_parser_;
    ::fhir::markdown_pskel* purpose_parser_;
    ::fhir::markdown_pskel* copyright_parser_;
    ::fhir::date_pskel* approvalDate_parser_;
    ::fhir::date_pskel* lastReviewDate_parser_;
    ::fhir::Period_pskel* effectivePeriod_parser_;
    ::fhir::Coding_pskel* code_parser_;
    ::fhir::Questionnaire_Item_pskel* item_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::Questionnaire_pskel::*func) (
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

  class Questionnaire_Item_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    linkId ();

    virtual void
    definition ();

    virtual void
    code ();

    virtual void
    prefix ();

    virtual void
    text ();

    virtual void
    type ();

    virtual void
    enableWhen ();

    virtual void
    enableBehavior ();

    virtual void
    required ();

    virtual void
    repeats ();

    virtual void
    readOnly ();

    virtual void
    maxLength ();

    virtual void
    answerValueSet ();

    virtual void
    answerOption ();

    virtual void
    initial ();

    virtual void
    item ();

    virtual void
    post_Questionnaire_Item ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::string_pskel& /* linkId */,
             ::fhir::uri_pskel& /* definition */,
             ::fhir::Coding_pskel& /* code */,
             ::fhir::string_pskel& /* prefix */,
             ::fhir::string_pskel& /* text */,
             ::fhir::QuestionnaireItemType_pskel& /* type */,
             ::fhir::Questionnaire_EnableWhen_pskel& /* enableWhen */,
             ::fhir::EnableWhenBehavior_pskel& /* enableBehavior */,
             ::fhir::boolean_pskel& /* required */,
             ::fhir::boolean_pskel& /* repeats */,
             ::fhir::boolean_pskel& /* readOnly */,
             ::fhir::integer_pskel& /* maxLength */,
             ::fhir::canonical_pskel& /* answerValueSet */,
             ::fhir::Questionnaire_AnswerOption_pskel& /* answerOption */,
             ::fhir::Questionnaire_Initial_pskel& /* initial */,
             ::fhir::Questionnaire_Item_pskel& /* item */);

    // Individual element parsers.
    //
    void
    linkId_parser (::fhir::string_pskel&);

    void
    definition_parser (::fhir::uri_pskel&);

    void
    code_parser (::fhir::Coding_pskel&);

    void
    prefix_parser (::fhir::string_pskel&);

    void
    text_parser (::fhir::string_pskel&);

    void
    type_parser (::fhir::QuestionnaireItemType_pskel&);

    void
    enableWhen_parser (::fhir::Questionnaire_EnableWhen_pskel&);

    void
    enableBehavior_parser (::fhir::EnableWhenBehavior_pskel&);

    void
    required_parser (::fhir::boolean_pskel&);

    void
    repeats_parser (::fhir::boolean_pskel&);

    void
    readOnly_parser (::fhir::boolean_pskel&);

    void
    maxLength_parser (::fhir::integer_pskel&);

    void
    answerValueSet_parser (::fhir::canonical_pskel&);

    void
    answerOption_parser (::fhir::Questionnaire_AnswerOption_pskel&);

    void
    initial_parser (::fhir::Questionnaire_Initial_pskel&);

    void
    item_parser (::fhir::Questionnaire_Item_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    Questionnaire_Item_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    Questionnaire_Item_pskel* Questionnaire_Item_impl_;
    Questionnaire_Item_pskel (Questionnaire_Item_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::string_pskel* linkId_parser_;
    ::fhir::uri_pskel* definition_parser_;
    ::fhir::Coding_pskel* code_parser_;
    ::fhir::string_pskel* prefix_parser_;
    ::fhir::string_pskel* text_parser_;
    ::fhir::QuestionnaireItemType_pskel* type_parser_;
    ::fhir::Questionnaire_EnableWhen_pskel* enableWhen_parser_;
    ::fhir::EnableWhenBehavior_pskel* enableBehavior_parser_;
    ::fhir::boolean_pskel* required_parser_;
    ::fhir::boolean_pskel* repeats_parser_;
    ::fhir::boolean_pskel* readOnly_parser_;
    ::fhir::integer_pskel* maxLength_parser_;
    ::fhir::canonical_pskel* answerValueSet_parser_;
    ::fhir::Questionnaire_AnswerOption_pskel* answerOption_parser_;
    ::fhir::Questionnaire_Initial_pskel* initial_parser_;
    ::fhir::Questionnaire_Item_pskel* item_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::Questionnaire_Item_pskel::*func) (
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

  class Questionnaire_EnableWhen_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    question ();

    virtual void
    operator_ ();

    virtual void
    answerBoolean ();

    virtual void
    answerDecimal ();

    virtual void
    answerInteger ();

    virtual void
    answerDate ();

    virtual void
    answerDateTime ();

    virtual void
    answerTime ();

    virtual void
    answerString ();

    virtual void
    answerCoding ();

    virtual void
    answerQuantity ();

    virtual void
    answerReference ();

    virtual void
    post_Questionnaire_EnableWhen ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::string_pskel& /* question */,
             ::fhir::QuestionnaireItemOperator_pskel& /* operator */,
             ::fhir::boolean_pskel& /* answerBoolean */,
             ::fhir::decimal_pskel& /* answerDecimal */,
             ::fhir::integer_pskel& /* answerInteger */,
             ::fhir::date_pskel& /* answerDate */,
             ::fhir::dateTime_pskel& /* answerDateTime */,
             ::fhir::time_pskel& /* answerTime */,
             ::fhir::string_pskel& /* answerString */,
             ::fhir::Coding_pskel& /* answerCoding */,
             ::fhir::Quantity_pskel& /* answerQuantity */,
             ::fhir::Reference_pskel& /* answerReference */);

    // Individual element parsers.
    //
    void
    question_parser (::fhir::string_pskel&);

    void
    operator__parser (::fhir::QuestionnaireItemOperator_pskel&);

    void
    answerBoolean_parser (::fhir::boolean_pskel&);

    void
    answerDecimal_parser (::fhir::decimal_pskel&);

    void
    answerInteger_parser (::fhir::integer_pskel&);

    void
    answerDate_parser (::fhir::date_pskel&);

    void
    answerDateTime_parser (::fhir::dateTime_pskel&);

    void
    answerTime_parser (::fhir::time_pskel&);

    void
    answerString_parser (::fhir::string_pskel&);

    void
    answerCoding_parser (::fhir::Coding_pskel&);

    void
    answerQuantity_parser (::fhir::Quantity_pskel&);

    void
    answerReference_parser (::fhir::Reference_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    Questionnaire_EnableWhen_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    Questionnaire_EnableWhen_pskel* Questionnaire_EnableWhen_impl_;
    Questionnaire_EnableWhen_pskel (Questionnaire_EnableWhen_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::string_pskel* question_parser_;
    ::fhir::QuestionnaireItemOperator_pskel* operator__parser_;
    ::fhir::boolean_pskel* answerBoolean_parser_;
    ::fhir::decimal_pskel* answerDecimal_parser_;
    ::fhir::integer_pskel* answerInteger_parser_;
    ::fhir::date_pskel* answerDate_parser_;
    ::fhir::dateTime_pskel* answerDateTime_parser_;
    ::fhir::time_pskel* answerTime_parser_;
    ::fhir::string_pskel* answerString_parser_;
    ::fhir::Coding_pskel* answerCoding_parser_;
    ::fhir::Quantity_pskel* answerQuantity_parser_;
    ::fhir::Reference_pskel* answerReference_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::Questionnaire_EnableWhen_pskel::*func) (
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

  class Questionnaire_AnswerOption_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    valueInteger ();

    virtual void
    valueDate ();

    virtual void
    valueTime ();

    virtual void
    valueString ();

    virtual void
    valueCoding ();

    virtual void
    valueReference ();

    virtual void
    initialSelected ();

    virtual void
    post_Questionnaire_AnswerOption ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::integer_pskel& /* valueInteger */,
             ::fhir::date_pskel& /* valueDate */,
             ::fhir::time_pskel& /* valueTime */,
             ::fhir::string_pskel& /* valueString */,
             ::fhir::Coding_pskel& /* valueCoding */,
             ::fhir::Reference_pskel& /* valueReference */,
             ::fhir::boolean_pskel& /* initialSelected */);

    // Individual element parsers.
    //
    void
    valueInteger_parser (::fhir::integer_pskel&);

    void
    valueDate_parser (::fhir::date_pskel&);

    void
    valueTime_parser (::fhir::time_pskel&);

    void
    valueString_parser (::fhir::string_pskel&);

    void
    valueCoding_parser (::fhir::Coding_pskel&);

    void
    valueReference_parser (::fhir::Reference_pskel&);

    void
    initialSelected_parser (::fhir::boolean_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    Questionnaire_AnswerOption_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    Questionnaire_AnswerOption_pskel* Questionnaire_AnswerOption_impl_;
    Questionnaire_AnswerOption_pskel (Questionnaire_AnswerOption_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::integer_pskel* valueInteger_parser_;
    ::fhir::date_pskel* valueDate_parser_;
    ::fhir::time_pskel* valueTime_parser_;
    ::fhir::string_pskel* valueString_parser_;
    ::fhir::Coding_pskel* valueCoding_parser_;
    ::fhir::Reference_pskel* valueReference_parser_;
    ::fhir::boolean_pskel* initialSelected_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::Questionnaire_AnswerOption_pskel::*func) (
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

  class Questionnaire_Initial_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    valueBoolean ();

    virtual void
    valueDecimal ();

    virtual void
    valueInteger ();

    virtual void
    valueDate ();

    virtual void
    valueDateTime ();

    virtual void
    valueTime ();

    virtual void
    valueString ();

    virtual void
    valueUri ();

    virtual void
    valueAttachment ();

    virtual void
    valueCoding ();

    virtual void
    valueQuantity ();

    virtual void
    valueReference ();

    virtual void
    post_Questionnaire_Initial ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::boolean_pskel& /* valueBoolean */,
             ::fhir::decimal_pskel& /* valueDecimal */,
             ::fhir::integer_pskel& /* valueInteger */,
             ::fhir::date_pskel& /* valueDate */,
             ::fhir::dateTime_pskel& /* valueDateTime */,
             ::fhir::time_pskel& /* valueTime */,
             ::fhir::string_pskel& /* valueString */,
             ::fhir::uri_pskel& /* valueUri */,
             ::fhir::Attachment_pskel& /* valueAttachment */,
             ::fhir::Coding_pskel& /* valueCoding */,
             ::fhir::Quantity_pskel& /* valueQuantity */,
             ::fhir::Reference_pskel& /* valueReference */);

    // Individual element parsers.
    //
    void
    valueBoolean_parser (::fhir::boolean_pskel&);

    void
    valueDecimal_parser (::fhir::decimal_pskel&);

    void
    valueInteger_parser (::fhir::integer_pskel&);

    void
    valueDate_parser (::fhir::date_pskel&);

    void
    valueDateTime_parser (::fhir::dateTime_pskel&);

    void
    valueTime_parser (::fhir::time_pskel&);

    void
    valueString_parser (::fhir::string_pskel&);

    void
    valueUri_parser (::fhir::uri_pskel&);

    void
    valueAttachment_parser (::fhir::Attachment_pskel&);

    void
    valueCoding_parser (::fhir::Coding_pskel&);

    void
    valueQuantity_parser (::fhir::Quantity_pskel&);

    void
    valueReference_parser (::fhir::Reference_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    Questionnaire_Initial_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    Questionnaire_Initial_pskel* Questionnaire_Initial_impl_;
    Questionnaire_Initial_pskel (Questionnaire_Initial_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::boolean_pskel* valueBoolean_parser_;
    ::fhir::decimal_pskel* valueDecimal_parser_;
    ::fhir::integer_pskel* valueInteger_parser_;
    ::fhir::date_pskel* valueDate_parser_;
    ::fhir::dateTime_pskel* valueDateTime_parser_;
    ::fhir::time_pskel* valueTime_parser_;
    ::fhir::string_pskel* valueString_parser_;
    ::fhir::uri_pskel* valueUri_parser_;
    ::fhir::Attachment_pskel* valueAttachment_parser_;
    ::fhir::Coding_pskel* valueCoding_parser_;
    ::fhir::Quantity_pskel* valueQuantity_parser_;
    ::fhir::Reference_pskel* valueReference_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::Questionnaire_Initial_pskel::*func) (
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

  class QuestionnaireItemType_list_pskel: public ::fhir::code_primitive_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    virtual void
    post_QuestionnaireItemType_list ();

    // Constructor.
    //
    QuestionnaireItemType_list_pskel (::fhir::code_primitive_pskel* tiein);

    // Implementation details.
    //
    protected:
    QuestionnaireItemType_list_pskel* QuestionnaireItemType_list_impl_;
    QuestionnaireItemType_list_pskel (QuestionnaireItemType_list_pskel*, void*);

    protected:
    static const char* const _xsde_QuestionnaireItemType_list_pskel_enums_[16UL];
  };

  class QuestionnaireItemType_pskel: public ::fhir::Element_pskel
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
    post_QuestionnaireItemType ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::QuestionnaireItemType_list_pskel& /* value */);

    // Individual attribute parsers.
    //
    void
    value_parser (::fhir::QuestionnaireItemType_list_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    QuestionnaireItemType_pskel (::fhir::Element_pskel* tiein);

    // Implementation details.
    //
    protected:
    QuestionnaireItemType_pskel* QuestionnaireItemType_impl_;
    QuestionnaireItemType_pskel (QuestionnaireItemType_pskel*, void*);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    protected:
    ::fhir::QuestionnaireItemType_list_pskel* value_parser_;
  };

  class EnableWhenBehavior_list_pskel: public ::fhir::code_primitive_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    virtual void
    post_EnableWhenBehavior_list ();

    // Constructor.
    //
    EnableWhenBehavior_list_pskel (::fhir::code_primitive_pskel* tiein);

    // Implementation details.
    //
    protected:
    EnableWhenBehavior_list_pskel* EnableWhenBehavior_list_impl_;
    EnableWhenBehavior_list_pskel (EnableWhenBehavior_list_pskel*, void*);

    protected:
    static const char* const _xsde_EnableWhenBehavior_list_pskel_enums_[2UL];
  };

  class EnableWhenBehavior_pskel: public ::fhir::Element_pskel
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
    post_EnableWhenBehavior ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::EnableWhenBehavior_list_pskel& /* value */);

    // Individual attribute parsers.
    //
    void
    value_parser (::fhir::EnableWhenBehavior_list_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    EnableWhenBehavior_pskel (::fhir::Element_pskel* tiein);

    // Implementation details.
    //
    protected:
    EnableWhenBehavior_pskel* EnableWhenBehavior_impl_;
    EnableWhenBehavior_pskel (EnableWhenBehavior_pskel*, void*);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    protected:
    ::fhir::EnableWhenBehavior_list_pskel* value_parser_;
  };

  class QuestionnaireItemOperator_list_pskel: public ::fhir::code_primitive_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    virtual void
    post_QuestionnaireItemOperator_list ();

    // Constructor.
    //
    QuestionnaireItemOperator_list_pskel (::fhir::code_primitive_pskel* tiein);

    // Implementation details.
    //
    protected:
    QuestionnaireItemOperator_list_pskel* QuestionnaireItemOperator_list_impl_;
    QuestionnaireItemOperator_list_pskel (QuestionnaireItemOperator_list_pskel*, void*);

    protected:
    static const char* const _xsde_QuestionnaireItemOperator_list_pskel_enums_[7UL];
  };

  class QuestionnaireItemOperator_pskel: public ::fhir::Element_pskel
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
    post_QuestionnaireItemOperator ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::QuestionnaireItemOperator_list_pskel& /* value */);

    // Individual attribute parsers.
    //
    void
    value_parser (::fhir::QuestionnaireItemOperator_list_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    QuestionnaireItemOperator_pskel (::fhir::Element_pskel* tiein);

    // Implementation details.
    //
    protected:
    QuestionnaireItemOperator_pskel* QuestionnaireItemOperator_impl_;
    QuestionnaireItemOperator_pskel (QuestionnaireItemOperator_pskel*, void*);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    protected:
    ::fhir::QuestionnaireItemOperator_list_pskel* value_parser_;
  };
}

#include <xsde/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // QUESTIONNAIRE_PSKEL_HXX