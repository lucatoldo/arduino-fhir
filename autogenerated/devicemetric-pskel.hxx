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

#ifndef DEVICEMETRIC_PSKEL_HXX
#define DEVICEMETRIC_PSKEL_HXX

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
  class DeviceMetric_pskel;
  class DeviceMetric_Calibration_pskel;
  class DeviceMetricCalibrationType_list_pskel;
  class DeviceMetricCalibrationType_pskel;
  class DeviceMetricColor_list_pskel;
  class DeviceMetricColor_pskel;
  class DeviceMetricCalibrationState_list_pskel;
  class DeviceMetricCalibrationState_pskel;
  class DeviceMetricOperationalStatus_list_pskel;
  class DeviceMetricOperationalStatus_pskel;
  class DeviceMetricCategory_list_pskel;
  class DeviceMetricCategory_pskel;
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
  class DeviceMetric_pskel: public ::fhir::DomainResource_pskel
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
    type ();

    virtual void
    unit ();

    virtual void
    source ();

    virtual void
    parent ();

    virtual void
    operationalStatus ();

    virtual void
    color ();

    virtual void
    category ();

    virtual void
    measurementPeriod ();

    virtual void
    calibration ();

    virtual void
    post_DeviceMetric ();

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
             ::fhir::CodeableConcept_pskel& /* type */,
             ::fhir::CodeableConcept_pskel& /* unit */,
             ::fhir::Reference_pskel& /* source */,
             ::fhir::Reference_pskel& /* parent */,
             ::fhir::DeviceMetricOperationalStatus_pskel& /* operationalStatus */,
             ::fhir::DeviceMetricColor_pskel& /* color */,
             ::fhir::DeviceMetricCategory_pskel& /* category */,
             ::fhir::Timing_pskel& /* measurementPeriod */,
             ::fhir::DeviceMetric_Calibration_pskel& /* calibration */);

    // Individual element parsers.
    //
    void
    identifier_parser (::fhir::Identifier_pskel&);

    void
    type_parser (::fhir::CodeableConcept_pskel&);

    void
    unit_parser (::fhir::CodeableConcept_pskel&);

    void
    source_parser (::fhir::Reference_pskel&);

    void
    parent_parser (::fhir::Reference_pskel&);

    void
    operationalStatus_parser (::fhir::DeviceMetricOperationalStatus_pskel&);

    void
    color_parser (::fhir::DeviceMetricColor_pskel&);

    void
    category_parser (::fhir::DeviceMetricCategory_pskel&);

    void
    measurementPeriod_parser (::fhir::Timing_pskel&);

    void
    calibration_parser (::fhir::DeviceMetric_Calibration_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    DeviceMetric_pskel (::fhir::DomainResource_pskel* tiein);

    // Implementation details.
    //
    protected:
    DeviceMetric_pskel* DeviceMetric_impl_;
    DeviceMetric_pskel (DeviceMetric_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::Identifier_pskel* identifier_parser_;
    ::fhir::CodeableConcept_pskel* type_parser_;
    ::fhir::CodeableConcept_pskel* unit_parser_;
    ::fhir::Reference_pskel* source_parser_;
    ::fhir::Reference_pskel* parent_parser_;
    ::fhir::DeviceMetricOperationalStatus_pskel* operationalStatus_parser_;
    ::fhir::DeviceMetricColor_pskel* color_parser_;
    ::fhir::DeviceMetricCategory_pskel* category_parser_;
    ::fhir::Timing_pskel* measurementPeriod_parser_;
    ::fhir::DeviceMetric_Calibration_pskel* calibration_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::DeviceMetric_pskel::*func) (
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

  class DeviceMetric_Calibration_pskel: public ::fhir::BackboneElement_pskel
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
    state ();

    virtual void
    time ();

    virtual void
    post_DeviceMetric_Calibration ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::DeviceMetricCalibrationType_pskel& /* type */,
             ::fhir::DeviceMetricCalibrationState_pskel& /* state */,
             ::fhir::instant_pskel& /* time */);

    // Individual element parsers.
    //
    void
    type_parser (::fhir::DeviceMetricCalibrationType_pskel&);

    void
    state_parser (::fhir::DeviceMetricCalibrationState_pskel&);

    void
    time_parser (::fhir::instant_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    DeviceMetric_Calibration_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    DeviceMetric_Calibration_pskel* DeviceMetric_Calibration_impl_;
    DeviceMetric_Calibration_pskel (DeviceMetric_Calibration_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::DeviceMetricCalibrationType_pskel* type_parser_;
    ::fhir::DeviceMetricCalibrationState_pskel* state_parser_;
    ::fhir::instant_pskel* time_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::DeviceMetric_Calibration_pskel::*func) (
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

  class DeviceMetricCalibrationType_list_pskel: public ::fhir::code_primitive_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    virtual void
    post_DeviceMetricCalibrationType_list ();

    // Constructor.
    //
    DeviceMetricCalibrationType_list_pskel (::fhir::code_primitive_pskel* tiein);

    // Implementation details.
    //
    protected:
    DeviceMetricCalibrationType_list_pskel* DeviceMetricCalibrationType_list_impl_;
    DeviceMetricCalibrationType_list_pskel (DeviceMetricCalibrationType_list_pskel*, void*);

    protected:
    static const char* const _xsde_DeviceMetricCalibrationType_list_pskel_enums_[4UL];
  };

  class DeviceMetricCalibrationType_pskel: public ::fhir::Element_pskel
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
    post_DeviceMetricCalibrationType ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::DeviceMetricCalibrationType_list_pskel& /* value */);

    // Individual attribute parsers.
    //
    void
    value_parser (::fhir::DeviceMetricCalibrationType_list_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    DeviceMetricCalibrationType_pskel (::fhir::Element_pskel* tiein);

    // Implementation details.
    //
    protected:
    DeviceMetricCalibrationType_pskel* DeviceMetricCalibrationType_impl_;
    DeviceMetricCalibrationType_pskel (DeviceMetricCalibrationType_pskel*, void*);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    protected:
    ::fhir::DeviceMetricCalibrationType_list_pskel* value_parser_;
  };

  class DeviceMetricColor_list_pskel: public ::fhir::code_primitive_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    virtual void
    post_DeviceMetricColor_list ();

    // Constructor.
    //
    DeviceMetricColor_list_pskel (::fhir::code_primitive_pskel* tiein);

    // Implementation details.
    //
    protected:
    DeviceMetricColor_list_pskel* DeviceMetricColor_list_impl_;
    DeviceMetricColor_list_pskel (DeviceMetricColor_list_pskel*, void*);

    protected:
    static const char* const _xsde_DeviceMetricColor_list_pskel_enums_[8UL];
  };

  class DeviceMetricColor_pskel: public ::fhir::Element_pskel
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
    post_DeviceMetricColor ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::DeviceMetricColor_list_pskel& /* value */);

    // Individual attribute parsers.
    //
    void
    value_parser (::fhir::DeviceMetricColor_list_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    DeviceMetricColor_pskel (::fhir::Element_pskel* tiein);

    // Implementation details.
    //
    protected:
    DeviceMetricColor_pskel* DeviceMetricColor_impl_;
    DeviceMetricColor_pskel (DeviceMetricColor_pskel*, void*);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    protected:
    ::fhir::DeviceMetricColor_list_pskel* value_parser_;
  };

  class DeviceMetricCalibrationState_list_pskel: public ::fhir::code_primitive_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    virtual void
    post_DeviceMetricCalibrationState_list ();

    // Constructor.
    //
    DeviceMetricCalibrationState_list_pskel (::fhir::code_primitive_pskel* tiein);

    // Implementation details.
    //
    protected:
    DeviceMetricCalibrationState_list_pskel* DeviceMetricCalibrationState_list_impl_;
    DeviceMetricCalibrationState_list_pskel (DeviceMetricCalibrationState_list_pskel*, void*);

    protected:
    static const char* const _xsde_DeviceMetricCalibrationState_list_pskel_enums_[4UL];
  };

  class DeviceMetricCalibrationState_pskel: public ::fhir::Element_pskel
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
    post_DeviceMetricCalibrationState ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::DeviceMetricCalibrationState_list_pskel& /* value */);

    // Individual attribute parsers.
    //
    void
    value_parser (::fhir::DeviceMetricCalibrationState_list_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    DeviceMetricCalibrationState_pskel (::fhir::Element_pskel* tiein);

    // Implementation details.
    //
    protected:
    DeviceMetricCalibrationState_pskel* DeviceMetricCalibrationState_impl_;
    DeviceMetricCalibrationState_pskel (DeviceMetricCalibrationState_pskel*, void*);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    protected:
    ::fhir::DeviceMetricCalibrationState_list_pskel* value_parser_;
  };

  class DeviceMetricOperationalStatus_list_pskel: public ::fhir::code_primitive_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    virtual void
    post_DeviceMetricOperationalStatus_list ();

    // Constructor.
    //
    DeviceMetricOperationalStatus_list_pskel (::fhir::code_primitive_pskel* tiein);

    // Implementation details.
    //
    protected:
    DeviceMetricOperationalStatus_list_pskel* DeviceMetricOperationalStatus_list_impl_;
    DeviceMetricOperationalStatus_list_pskel (DeviceMetricOperationalStatus_list_pskel*, void*);

    protected:
    static const char* const _xsde_DeviceMetricOperationalStatus_list_pskel_enums_[4UL];
  };

  class DeviceMetricOperationalStatus_pskel: public ::fhir::Element_pskel
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
    post_DeviceMetricOperationalStatus ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::DeviceMetricOperationalStatus_list_pskel& /* value */);

    // Individual attribute parsers.
    //
    void
    value_parser (::fhir::DeviceMetricOperationalStatus_list_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    DeviceMetricOperationalStatus_pskel (::fhir::Element_pskel* tiein);

    // Implementation details.
    //
    protected:
    DeviceMetricOperationalStatus_pskel* DeviceMetricOperationalStatus_impl_;
    DeviceMetricOperationalStatus_pskel (DeviceMetricOperationalStatus_pskel*, void*);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    protected:
    ::fhir::DeviceMetricOperationalStatus_list_pskel* value_parser_;
  };

  class DeviceMetricCategory_list_pskel: public ::fhir::code_primitive_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    virtual void
    post_DeviceMetricCategory_list ();

    // Constructor.
    //
    DeviceMetricCategory_list_pskel (::fhir::code_primitive_pskel* tiein);

    // Implementation details.
    //
    protected:
    DeviceMetricCategory_list_pskel* DeviceMetricCategory_list_impl_;
    DeviceMetricCategory_list_pskel (DeviceMetricCategory_list_pskel*, void*);

    protected:
    static const char* const _xsde_DeviceMetricCategory_list_pskel_enums_[4UL];
  };

  class DeviceMetricCategory_pskel: public ::fhir::Element_pskel
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
    post_DeviceMetricCategory ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::DeviceMetricCategory_list_pskel& /* value */);

    // Individual attribute parsers.
    //
    void
    value_parser (::fhir::DeviceMetricCategory_list_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    DeviceMetricCategory_pskel (::fhir::Element_pskel* tiein);

    // Implementation details.
    //
    protected:
    DeviceMetricCategory_pskel* DeviceMetricCategory_impl_;
    DeviceMetricCategory_pskel (DeviceMetricCategory_pskel*, void*);

    protected:
    virtual bool
    _attribute_impl_phase_one (const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&,
                               const ::xsde::cxx::ro_string&);


    protected:
    ::fhir::DeviceMetricCategory_list_pskel* value_parser_;
  };
}

#include <xsde/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // DEVICEMETRIC_PSKEL_HXX
