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

#ifndef DEVICEDEFINITION_PSKEL_HXX
#define DEVICEDEFINITION_PSKEL_HXX

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
  class DeviceDefinition_pskel;
  class DeviceDefinition_UdiDeviceIdentifier_pskel;
  class DeviceDefinition_DeviceName_pskel;
  class DeviceDefinition_Specialization_pskel;
  class DeviceDefinition_Capability_pskel;
  class DeviceDefinition_Property_pskel;
  class DeviceDefinition_Material_pskel;
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
  class DeviceDefinition_pskel: public ::fhir::DomainResource_pskel
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
    udiDeviceIdentifier ();

    virtual void
    manufacturerString ();

    virtual void
    manufacturerReference ();

    virtual void
    deviceName ();

    virtual void
    modelNumber ();

    virtual void
    type ();

    virtual void
    specialization ();

    virtual void
    version ();

    virtual void
    safety ();

    virtual void
    shelfLifeStorage ();

    virtual void
    physicalCharacteristics ();

    virtual void
    languageCode ();

    virtual void
    capability ();

    virtual void
    property ();

    virtual void
    owner ();

    virtual void
    contact ();

    virtual void
    url ();

    virtual void
    onlineInformation ();

    virtual void
    note ();

    virtual void
    quantity ();

    virtual void
    parentDevice ();

    virtual void
    material ();

    virtual void
    post_DeviceDefinition ();

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
             ::fhir::DeviceDefinition_UdiDeviceIdentifier_pskel& /* udiDeviceIdentifier */,
             ::fhir::string_pskel& /* manufacturerString */,
             ::fhir::Reference_pskel& /* manufacturerReference */,
             ::fhir::DeviceDefinition_DeviceName_pskel& /* deviceName */,
             ::fhir::string_pskel& /* modelNumber */,
             ::fhir::CodeableConcept_pskel& /* type */,
             ::fhir::DeviceDefinition_Specialization_pskel& /* specialization */,
             ::fhir::string_pskel& /* version */,
             ::fhir::CodeableConcept_pskel& /* safety */,
             ::fhir::ProductShelfLife_pskel& /* shelfLifeStorage */,
             ::fhir::ProdCharacteristic_pskel& /* physicalCharacteristics */,
             ::fhir::CodeableConcept_pskel& /* languageCode */,
             ::fhir::DeviceDefinition_Capability_pskel& /* capability */,
             ::fhir::DeviceDefinition_Property_pskel& /* property */,
             ::fhir::Reference_pskel& /* owner */,
             ::fhir::ContactPoint_pskel& /* contact */,
             ::fhir::uri_pskel& /* url */,
             ::fhir::uri_pskel& /* onlineInformation */,
             ::fhir::Annotation_pskel& /* note */,
             ::fhir::Quantity_pskel& /* quantity */,
             ::fhir::Reference_pskel& /* parentDevice */,
             ::fhir::DeviceDefinition_Material_pskel& /* material */);

    // Individual element parsers.
    //
    void
    identifier_parser (::fhir::Identifier_pskel&);

    void
    udiDeviceIdentifier_parser (::fhir::DeviceDefinition_UdiDeviceIdentifier_pskel&);

    void
    manufacturerString_parser (::fhir::string_pskel&);

    void
    manufacturerReference_parser (::fhir::Reference_pskel&);

    void
    deviceName_parser (::fhir::DeviceDefinition_DeviceName_pskel&);

    void
    modelNumber_parser (::fhir::string_pskel&);

    void
    type_parser (::fhir::CodeableConcept_pskel&);

    void
    specialization_parser (::fhir::DeviceDefinition_Specialization_pskel&);

    void
    version_parser (::fhir::string_pskel&);

    void
    safety_parser (::fhir::CodeableConcept_pskel&);

    void
    shelfLifeStorage_parser (::fhir::ProductShelfLife_pskel&);

    void
    physicalCharacteristics_parser (::fhir::ProdCharacteristic_pskel&);

    void
    languageCode_parser (::fhir::CodeableConcept_pskel&);

    void
    capability_parser (::fhir::DeviceDefinition_Capability_pskel&);

    void
    property_parser (::fhir::DeviceDefinition_Property_pskel&);

    void
    owner_parser (::fhir::Reference_pskel&);

    void
    contact_parser (::fhir::ContactPoint_pskel&);

    void
    url_parser (::fhir::uri_pskel&);

    void
    onlineInformation_parser (::fhir::uri_pskel&);

    void
    note_parser (::fhir::Annotation_pskel&);

    void
    quantity_parser (::fhir::Quantity_pskel&);

    void
    parentDevice_parser (::fhir::Reference_pskel&);

    void
    material_parser (::fhir::DeviceDefinition_Material_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    DeviceDefinition_pskel (::fhir::DomainResource_pskel* tiein);

    // Implementation details.
    //
    protected:
    DeviceDefinition_pskel* DeviceDefinition_impl_;
    DeviceDefinition_pskel (DeviceDefinition_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::Identifier_pskel* identifier_parser_;
    ::fhir::DeviceDefinition_UdiDeviceIdentifier_pskel* udiDeviceIdentifier_parser_;
    ::fhir::string_pskel* manufacturerString_parser_;
    ::fhir::Reference_pskel* manufacturerReference_parser_;
    ::fhir::DeviceDefinition_DeviceName_pskel* deviceName_parser_;
    ::fhir::string_pskel* modelNumber_parser_;
    ::fhir::CodeableConcept_pskel* type_parser_;
    ::fhir::DeviceDefinition_Specialization_pskel* specialization_parser_;
    ::fhir::string_pskel* version_parser_;
    ::fhir::CodeableConcept_pskel* safety_parser_;
    ::fhir::ProductShelfLife_pskel* shelfLifeStorage_parser_;
    ::fhir::ProdCharacteristic_pskel* physicalCharacteristics_parser_;
    ::fhir::CodeableConcept_pskel* languageCode_parser_;
    ::fhir::DeviceDefinition_Capability_pskel* capability_parser_;
    ::fhir::DeviceDefinition_Property_pskel* property_parser_;
    ::fhir::Reference_pskel* owner_parser_;
    ::fhir::ContactPoint_pskel* contact_parser_;
    ::fhir::uri_pskel* url_parser_;
    ::fhir::uri_pskel* onlineInformation_parser_;
    ::fhir::Annotation_pskel* note_parser_;
    ::fhir::Quantity_pskel* quantity_parser_;
    ::fhir::Reference_pskel* parentDevice_parser_;
    ::fhir::DeviceDefinition_Material_pskel* material_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::DeviceDefinition_pskel::*func) (
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

  class DeviceDefinition_UdiDeviceIdentifier_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    deviceIdentifier ();

    virtual void
    issuer ();

    virtual void
    jurisdiction ();

    virtual void
    post_DeviceDefinition_UdiDeviceIdentifier ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::string_pskel& /* deviceIdentifier */,
             ::fhir::uri_pskel& /* issuer */,
             ::fhir::uri_pskel& /* jurisdiction */);

    // Individual element parsers.
    //
    void
    deviceIdentifier_parser (::fhir::string_pskel&);

    void
    issuer_parser (::fhir::uri_pskel&);

    void
    jurisdiction_parser (::fhir::uri_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    DeviceDefinition_UdiDeviceIdentifier_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    DeviceDefinition_UdiDeviceIdentifier_pskel* DeviceDefinition_UdiDeviceIdentifier_impl_;
    DeviceDefinition_UdiDeviceIdentifier_pskel (DeviceDefinition_UdiDeviceIdentifier_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::string_pskel* deviceIdentifier_parser_;
    ::fhir::uri_pskel* issuer_parser_;
    ::fhir::uri_pskel* jurisdiction_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::DeviceDefinition_UdiDeviceIdentifier_pskel::*func) (
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

  class DeviceDefinition_DeviceName_pskel: public ::fhir::BackboneElement_pskel
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
    type ();

    virtual void
    post_DeviceDefinition_DeviceName ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::string_pskel& /* name */,
             ::fhir::DeviceNameType_pskel& /* type */);

    // Individual element parsers.
    //
    void
    name_parser (::fhir::string_pskel&);

    void
    type_parser (::fhir::DeviceNameType_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    DeviceDefinition_DeviceName_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    DeviceDefinition_DeviceName_pskel* DeviceDefinition_DeviceName_impl_;
    DeviceDefinition_DeviceName_pskel (DeviceDefinition_DeviceName_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::string_pskel* name_parser_;
    ::fhir::DeviceNameType_pskel* type_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::DeviceDefinition_DeviceName_pskel::*func) (
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

  class DeviceDefinition_Specialization_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    systemType ();

    virtual void
    version ();

    virtual void
    post_DeviceDefinition_Specialization ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::string_pskel& /* systemType */,
             ::fhir::string_pskel& /* version */);

    // Individual element parsers.
    //
    void
    systemType_parser (::fhir::string_pskel&);

    void
    version_parser (::fhir::string_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    DeviceDefinition_Specialization_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    DeviceDefinition_Specialization_pskel* DeviceDefinition_Specialization_impl_;
    DeviceDefinition_Specialization_pskel (DeviceDefinition_Specialization_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::string_pskel* systemType_parser_;
    ::fhir::string_pskel* version_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::DeviceDefinition_Specialization_pskel::*func) (
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

  class DeviceDefinition_Capability_pskel: public ::fhir::BackboneElement_pskel
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
    description ();

    virtual void
    post_DeviceDefinition_Capability ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::CodeableConcept_pskel& /* type */,
             ::fhir::CodeableConcept_pskel& /* description */);

    // Individual element parsers.
    //
    void
    type_parser (::fhir::CodeableConcept_pskel&);

    void
    description_parser (::fhir::CodeableConcept_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    DeviceDefinition_Capability_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    DeviceDefinition_Capability_pskel* DeviceDefinition_Capability_impl_;
    DeviceDefinition_Capability_pskel (DeviceDefinition_Capability_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::CodeableConcept_pskel* type_parser_;
    ::fhir::CodeableConcept_pskel* description_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::DeviceDefinition_Capability_pskel::*func) (
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

  class DeviceDefinition_Property_pskel: public ::fhir::BackboneElement_pskel
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
    valueQuantity ();

    virtual void
    valueCode ();

    virtual void
    post_DeviceDefinition_Property ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::CodeableConcept_pskel& /* type */,
             ::fhir::Quantity_pskel& /* valueQuantity */,
             ::fhir::CodeableConcept_pskel& /* valueCode */);

    // Individual element parsers.
    //
    void
    type_parser (::fhir::CodeableConcept_pskel&);

    void
    valueQuantity_parser (::fhir::Quantity_pskel&);

    void
    valueCode_parser (::fhir::CodeableConcept_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    DeviceDefinition_Property_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    DeviceDefinition_Property_pskel* DeviceDefinition_Property_impl_;
    DeviceDefinition_Property_pskel (DeviceDefinition_Property_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::CodeableConcept_pskel* type_parser_;
    ::fhir::Quantity_pskel* valueQuantity_parser_;
    ::fhir::CodeableConcept_pskel* valueCode_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::DeviceDefinition_Property_pskel::*func) (
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

  class DeviceDefinition_Material_pskel: public ::fhir::BackboneElement_pskel
  {
    public:
    // Parser callbacks. Override them in your implementation.
    //
    // virtual void
    // pre ();

    // Elements.
    //
    virtual void
    substance ();

    virtual void
    alternate ();

    virtual void
    allergenicIndicator ();

    virtual void
    post_DeviceDefinition_Material ();

    // Parser construction API.
    //
    void
    parsers (::fhir::string_primitive_pskel& /* id */,
             ::fhir::Extension_pskel& /* extension */,
             ::fhir::Extension_pskel& /* modifierExtension */,
             ::fhir::CodeableConcept_pskel& /* substance */,
             ::fhir::boolean_pskel& /* alternate */,
             ::fhir::boolean_pskel& /* allergenicIndicator */);

    // Individual element parsers.
    //
    void
    substance_parser (::fhir::CodeableConcept_pskel&);

    void
    alternate_parser (::fhir::boolean_pskel&);

    void
    allergenicIndicator_parser (::fhir::boolean_pskel&);

    virtual void
    _reset ();

    // Constructor.
    //
    DeviceDefinition_Material_pskel (::fhir::BackboneElement_pskel* tiein);

    // Implementation details.
    //
    protected:
    DeviceDefinition_Material_pskel* DeviceDefinition_Material_impl_;
    DeviceDefinition_Material_pskel (DeviceDefinition_Material_pskel*, void*);

    protected:
    virtual bool
    _start_element_impl (const ::xsde::cxx::ro_string&,
                         const ::xsde::cxx::ro_string&);

    virtual bool
    _end_element_impl (const ::xsde::cxx::ro_string&,
                       const ::xsde::cxx::ro_string&);

    protected:
    ::fhir::CodeableConcept_pskel* substance_parser_;
    ::fhir::boolean_pskel* alternate_parser_;
    ::fhir::boolean_pskel* allergenicIndicator_parser_;

    public:
    struct v_state_descr_
    {
      void (::fhir::DeviceDefinition_Material_pskel::*func) (
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

#endif // DEVICEDEFINITION_PSKEL_HXX