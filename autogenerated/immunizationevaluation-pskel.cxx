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

// Begin prologue.
//
//
// End prologue.

#include <xsde/cxx/pre.hxx>

#include "immunizationevaluation-pskel.hxx"

namespace fhir
{
  // ImmunizationEvaluation_pskel
  //

  void ImmunizationEvaluation_pskel::
  identifier_parser (::fhir::Identifier_pskel& p)
  {
    this->identifier_parser_ = &p;
  }

  void ImmunizationEvaluation_pskel::
  status_parser (::fhir::ImmunizationEvaluationStatusCodes_pskel& p)
  {
    this->status_parser_ = &p;
  }

  void ImmunizationEvaluation_pskel::
  patient_parser (::fhir::Reference_pskel& p)
  {
    this->patient_parser_ = &p;
  }

  void ImmunizationEvaluation_pskel::
  date_parser (::fhir::dateTime_pskel& p)
  {
    this->date_parser_ = &p;
  }

  void ImmunizationEvaluation_pskel::
  authority_parser (::fhir::Reference_pskel& p)
  {
    this->authority_parser_ = &p;
  }

  void ImmunizationEvaluation_pskel::
  targetDisease_parser (::fhir::CodeableConcept_pskel& p)
  {
    this->targetDisease_parser_ = &p;
  }

  void ImmunizationEvaluation_pskel::
  immunizationEvent_parser (::fhir::Reference_pskel& p)
  {
    this->immunizationEvent_parser_ = &p;
  }

  void ImmunizationEvaluation_pskel::
  doseStatus_parser (::fhir::CodeableConcept_pskel& p)
  {
    this->doseStatus_parser_ = &p;
  }

  void ImmunizationEvaluation_pskel::
  doseStatusReason_parser (::fhir::CodeableConcept_pskel& p)
  {
    this->doseStatusReason_parser_ = &p;
  }

  void ImmunizationEvaluation_pskel::
  description_parser (::fhir::string_pskel& p)
  {
    this->description_parser_ = &p;
  }

  void ImmunizationEvaluation_pskel::
  series_parser (::fhir::string_pskel& p)
  {
    this->series_parser_ = &p;
  }

  void ImmunizationEvaluation_pskel::
  doseNumberPositiveInt_parser (::fhir::positiveInt_pskel& p)
  {
    this->doseNumberPositiveInt_parser_ = &p;
  }

  void ImmunizationEvaluation_pskel::
  doseNumberString_parser (::fhir::string_pskel& p)
  {
    this->doseNumberString_parser_ = &p;
  }

  void ImmunizationEvaluation_pskel::
  seriesDosesPositiveInt_parser (::fhir::positiveInt_pskel& p)
  {
    this->seriesDosesPositiveInt_parser_ = &p;
  }

  void ImmunizationEvaluation_pskel::
  seriesDosesString_parser (::fhir::string_pskel& p)
  {
    this->seriesDosesString_parser_ = &p;
  }

  void ImmunizationEvaluation_pskel::
  parsers (::fhir::id_pskel& id,
           ::fhir::Meta_pskel& meta,
           ::fhir::uri_pskel& implicitRules,
           ::fhir::code_pskel& language,
           ::fhir::Narrative_pskel& text,
           ::fhir::ResourceContainer_pskel& contained,
           ::fhir::Extension_pskel& extension,
           ::fhir::Extension_pskel& modifierExtension,
           ::fhir::Identifier_pskel& identifier,
           ::fhir::ImmunizationEvaluationStatusCodes_pskel& status,
           ::fhir::Reference_pskel& patient,
           ::fhir::dateTime_pskel& date,
           ::fhir::Reference_pskel& authority,
           ::fhir::CodeableConcept_pskel& targetDisease,
           ::fhir::Reference_pskel& immunizationEvent,
           ::fhir::CodeableConcept_pskel& doseStatus,
           ::fhir::CodeableConcept_pskel& doseStatusReason,
           ::fhir::string_pskel& description,
           ::fhir::string_pskel& series,
           ::fhir::positiveInt_pskel& doseNumberPositiveInt,
           ::fhir::string_pskel& doseNumberString,
           ::fhir::positiveInt_pskel& seriesDosesPositiveInt,
           ::fhir::string_pskel& seriesDosesString)
  {
    this->id_parser_ = &id;
    this->meta_parser_ = &meta;
    this->implicitRules_parser_ = &implicitRules;
    this->language_parser_ = &language;
    this->text_parser_ = &text;
    this->contained_parser_ = &contained;
    this->extension_parser_ = &extension;
    this->modifierExtension_parser_ = &modifierExtension;
    this->identifier_parser_ = &identifier;
    this->status_parser_ = &status;
    this->patient_parser_ = &patient;
    this->date_parser_ = &date;
    this->authority_parser_ = &authority;
    this->targetDisease_parser_ = &targetDisease;
    this->immunizationEvent_parser_ = &immunizationEvent;
    this->doseStatus_parser_ = &doseStatus;
    this->doseStatusReason_parser_ = &doseStatusReason;
    this->description_parser_ = &description;
    this->series_parser_ = &series;
    this->doseNumberPositiveInt_parser_ = &doseNumberPositiveInt;
    this->doseNumberString_parser_ = &doseNumberString;
    this->seriesDosesPositiveInt_parser_ = &seriesDosesPositiveInt;
    this->seriesDosesString_parser_ = &seriesDosesString;
  }

  ImmunizationEvaluation_pskel::
  ImmunizationEvaluation_pskel (::fhir::DomainResource_pskel* tiein)
  : ::fhir::DomainResource_pskel (tiein, 0),
    ImmunizationEvaluation_impl_ (0),
    identifier_parser_ (0),
    status_parser_ (0),
    patient_parser_ (0),
    date_parser_ (0),
    authority_parser_ (0),
    targetDisease_parser_ (0),
    immunizationEvent_parser_ (0),
    doseStatus_parser_ (0),
    doseStatusReason_parser_ (0),
    description_parser_ (0),
    series_parser_ (0),
    doseNumberPositiveInt_parser_ (0),
    doseNumberString_parser_ (0),
    seriesDosesPositiveInt_parser_ (0),
    seriesDosesString_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }

  ImmunizationEvaluation_pskel::
  ImmunizationEvaluation_pskel (ImmunizationEvaluation_pskel* impl, void*)
  : ::fhir::DomainResource_pskel (impl, 0),
    ImmunizationEvaluation_impl_ (impl),
    identifier_parser_ (0),
    status_parser_ (0),
    patient_parser_ (0),
    date_parser_ (0),
    authority_parser_ (0),
    targetDisease_parser_ (0),
    immunizationEvent_parser_ (0),
    doseStatus_parser_ (0),
    doseStatusReason_parser_ (0),
    description_parser_ (0),
    series_parser_ (0),
    doseNumberPositiveInt_parser_ (0),
    doseNumberString_parser_ (0),
    seriesDosesPositiveInt_parser_ (0),
    seriesDosesString_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }

  // ImmunizationEvaluationStatusCodes_list_pskel
  //

  ImmunizationEvaluationStatusCodes_list_pskel::
  ImmunizationEvaluationStatusCodes_list_pskel (::fhir::code_primitive_pskel* tiein)
  : ::fhir::code_primitive_pskel (tiein, 0),
    ImmunizationEvaluationStatusCodes_list_impl_ (0)
  {
    this->_enumeration_facet (_xsde_ImmunizationEvaluationStatusCodes_list_pskel_enums_, 2UL);
  }

  ImmunizationEvaluationStatusCodes_list_pskel::
  ImmunizationEvaluationStatusCodes_list_pskel (ImmunizationEvaluationStatusCodes_list_pskel* impl, void*)
  : ::fhir::code_primitive_pskel (impl, 0),
    ImmunizationEvaluationStatusCodes_list_impl_ (impl)
  {
    this->_enumeration_facet (_xsde_ImmunizationEvaluationStatusCodes_list_pskel_enums_, 2UL);
  }

  // ImmunizationEvaluationStatusCodes_pskel
  //

  void ImmunizationEvaluationStatusCodes_pskel::
  value_parser (::fhir::ImmunizationEvaluationStatusCodes_list_pskel& p)
  {
    this->value_parser_ = &p;
  }

  void ImmunizationEvaluationStatusCodes_pskel::
  parsers (::fhir::string_primitive_pskel& id,
           ::fhir::Extension_pskel& extension,
           ::fhir::ImmunizationEvaluationStatusCodes_list_pskel& value)
  {
    this->id_parser_ = &id;
    this->extension_parser_ = &extension;
    this->value_parser_ = &value;
  }

  ImmunizationEvaluationStatusCodes_pskel::
  ImmunizationEvaluationStatusCodes_pskel (::fhir::Element_pskel* tiein)
  : ::fhir::Element_pskel (tiein, 0),
    ImmunizationEvaluationStatusCodes_impl_ (0),
    value_parser_ (0)
  {
  }

  ImmunizationEvaluationStatusCodes_pskel::
  ImmunizationEvaluationStatusCodes_pskel (ImmunizationEvaluationStatusCodes_pskel* impl, void*)
  : ::fhir::Element_pskel (impl, 0),
    ImmunizationEvaluationStatusCodes_impl_ (impl),
    value_parser_ (0)
  {
  }
}

#include <assert.h>

namespace fhir
{
  // ImmunizationEvaluation_pskel
  //

  void ImmunizationEvaluation_pskel::
  identifier ()
  {
    if (this->ImmunizationEvaluation_impl_)
      this->ImmunizationEvaluation_impl_->identifier ();
  }

  void ImmunizationEvaluation_pskel::
  status ()
  {
    if (this->ImmunizationEvaluation_impl_)
      this->ImmunizationEvaluation_impl_->status ();
  }

  void ImmunizationEvaluation_pskel::
  patient ()
  {
    if (this->ImmunizationEvaluation_impl_)
      this->ImmunizationEvaluation_impl_->patient ();
  }

  void ImmunizationEvaluation_pskel::
  date ()
  {
    if (this->ImmunizationEvaluation_impl_)
      this->ImmunizationEvaluation_impl_->date ();
  }

  void ImmunizationEvaluation_pskel::
  authority ()
  {
    if (this->ImmunizationEvaluation_impl_)
      this->ImmunizationEvaluation_impl_->authority ();
  }

  void ImmunizationEvaluation_pskel::
  targetDisease ()
  {
    if (this->ImmunizationEvaluation_impl_)
      this->ImmunizationEvaluation_impl_->targetDisease ();
  }

  void ImmunizationEvaluation_pskel::
  immunizationEvent ()
  {
    if (this->ImmunizationEvaluation_impl_)
      this->ImmunizationEvaluation_impl_->immunizationEvent ();
  }

  void ImmunizationEvaluation_pskel::
  doseStatus ()
  {
    if (this->ImmunizationEvaluation_impl_)
      this->ImmunizationEvaluation_impl_->doseStatus ();
  }

  void ImmunizationEvaluation_pskel::
  doseStatusReason ()
  {
    if (this->ImmunizationEvaluation_impl_)
      this->ImmunizationEvaluation_impl_->doseStatusReason ();
  }

  void ImmunizationEvaluation_pskel::
  description ()
  {
    if (this->ImmunizationEvaluation_impl_)
      this->ImmunizationEvaluation_impl_->description ();
  }

  void ImmunizationEvaluation_pskel::
  series ()
  {
    if (this->ImmunizationEvaluation_impl_)
      this->ImmunizationEvaluation_impl_->series ();
  }

  void ImmunizationEvaluation_pskel::
  doseNumberPositiveInt ()
  {
    if (this->ImmunizationEvaluation_impl_)
      this->ImmunizationEvaluation_impl_->doseNumberPositiveInt ();
  }

  void ImmunizationEvaluation_pskel::
  doseNumberString ()
  {
    if (this->ImmunizationEvaluation_impl_)
      this->ImmunizationEvaluation_impl_->doseNumberString ();
  }

  void ImmunizationEvaluation_pskel::
  seriesDosesPositiveInt ()
  {
    if (this->ImmunizationEvaluation_impl_)
      this->ImmunizationEvaluation_impl_->seriesDosesPositiveInt ();
  }

  void ImmunizationEvaluation_pskel::
  seriesDosesString ()
  {
    if (this->ImmunizationEvaluation_impl_)
      this->ImmunizationEvaluation_impl_->seriesDosesString ();
  }

  void ImmunizationEvaluation_pskel::
  post_ImmunizationEvaluation ()
  {
    if (this->ImmunizationEvaluation_impl_)
      this->ImmunizationEvaluation_impl_->post_ImmunizationEvaluation ();
    else
      post_DomainResource ();
  }

  void ImmunizationEvaluation_pskel::
  _reset ()
  {
    if (this->resetting_)
      return;

    typedef ::fhir::DomainResource_pskel base;
    base::_reset ();

    this->v_state_stack_.clear ();

    this->resetting_ = true;

    if (this->identifier_parser_)
      this->identifier_parser_->_reset ();

    if (this->status_parser_)
      this->status_parser_->_reset ();

    if (this->patient_parser_)
      this->patient_parser_->_reset ();

    if (this->date_parser_)
      this->date_parser_->_reset ();

    if (this->authority_parser_)
      this->authority_parser_->_reset ();

    if (this->targetDisease_parser_)
      this->targetDisease_parser_->_reset ();

    if (this->immunizationEvent_parser_)
      this->immunizationEvent_parser_->_reset ();

    if (this->doseStatus_parser_)
      this->doseStatus_parser_->_reset ();

    if (this->doseStatusReason_parser_)
      this->doseStatusReason_parser_->_reset ();

    if (this->description_parser_)
      this->description_parser_->_reset ();

    if (this->series_parser_)
      this->series_parser_->_reset ();

    if (this->doseNumberPositiveInt_parser_)
      this->doseNumberPositiveInt_parser_->_reset ();

    if (this->doseNumberString_parser_)
      this->doseNumberString_parser_->_reset ();

    if (this->seriesDosesPositiveInt_parser_)
      this->seriesDosesPositiveInt_parser_->_reset ();

    if (this->seriesDosesString_parser_)
      this->seriesDosesString_parser_->_reset ();

    this->resetting_ = false;
  }

  // ImmunizationEvaluationStatusCodes_list_pskel
  //

  void ImmunizationEvaluationStatusCodes_list_pskel::
  post_ImmunizationEvaluationStatusCodes_list ()
  {
    if (this->ImmunizationEvaluationStatusCodes_list_impl_)
      this->ImmunizationEvaluationStatusCodes_list_impl_->post_ImmunizationEvaluationStatusCodes_list ();
    else
      post_code_primitive ();
  }

  const char* const ImmunizationEvaluationStatusCodes_list_pskel::_xsde_ImmunizationEvaluationStatusCodes_list_pskel_enums_[2UL] = 
  {
    "completed",
    "entered-in-error"
  };

  // ImmunizationEvaluationStatusCodes_pskel
  //

  void ImmunizationEvaluationStatusCodes_pskel::
  value ()
  {
    if (this->ImmunizationEvaluationStatusCodes_impl_)
      this->ImmunizationEvaluationStatusCodes_impl_->value ();
  }

  void ImmunizationEvaluationStatusCodes_pskel::
  post_ImmunizationEvaluationStatusCodes ()
  {
    if (this->ImmunizationEvaluationStatusCodes_impl_)
      this->ImmunizationEvaluationStatusCodes_impl_->post_ImmunizationEvaluationStatusCodes ();
    else
      post_Element ();
  }

  void ImmunizationEvaluationStatusCodes_pskel::
  _reset ()
  {
    typedef ::fhir::Element_pskel base;
    base::_reset ();

    if (this->value_parser_)
      this->value_parser_->_reset ();
  }
}

#include <assert.h>

namespace fhir
{
  // Element validation and dispatch functions for ImmunizationEvaluation_pskel.
  //
  bool ImmunizationEvaluation_pskel::
  _start_element_impl (const ::xsde::cxx::ro_string& ns,
                       const ::xsde::cxx::ro_string& n)
  {
    ::xsde::cxx::parser::context& ctx = this->_context ();

    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_* vd = vs.data + (vs.size - 1);

    if (vd->func == 0 && vd->state == 0)
    {
      typedef ::fhir::DomainResource_pskel base;
      if (base::_start_element_impl (ns, n))
        return true;
      else
        vd->state = 1;
    }

    while (vd->func != 0)
    {
      (this->*vd->func) (vd->state, vd->count, ns, n, true);

      vd = vs.data + (vs.size - 1);

      if (vd->state == ~0UL && !ctx.error_type ())
        vd = vs.data + (--vs.size - 1);
      else
        break;
    }

    if (vd->func == 0)
    {
      if (vd->state != ~0UL)
      {
        unsigned long s = ~0UL;

        if (n == "identifier" &&
            ns == "http://hl7.org/fhir")
          s = 0UL;
        else if (n == "status" &&
                 ns == "http://hl7.org/fhir")
          s = 1UL;

        if (s != ~0UL)
        {
          vd->count++;
          vd->state = ~0UL;

          vd = vs.data + vs.size++;
          vd->func = &ImmunizationEvaluation_pskel::sequence_0;
          vd->state = s;
          vd->count = 0;

          this->sequence_0 (vd->state, vd->count, ns, n, true);
        }
        else
        {
          if (vd->count < 1UL)
          {
            this->_schema_error (::xsde::cxx::schema_error::expected_element);
            return true;
          }

          return false;
        }
      }
      else
        return false;
    }

    return true;
  }

  bool ImmunizationEvaluation_pskel::
  _end_element_impl (const ::xsde::cxx::ro_string& ns,
                     const ::xsde::cxx::ro_string& n)
  {
    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_& vd = vs.data[vs.size - 1];

    if (vd.func == 0 && vd.state == 0)
    {
      typedef ::fhir::DomainResource_pskel base;
      if (!base::_end_element_impl (ns, n))
        assert (false);
      return true;
    }

    assert (vd.func != 0);
    (this->*vd.func) (vd.state, vd.count, ns, n, false);

    if (vd.state == ~0UL)
      vs.size--;

    return true;
  }

  void ImmunizationEvaluation_pskel::
  _pre_e_validate ()
  {
    this->v_state_stack_.push ();
    static_cast< v_state_* > (this->v_state_stack_.top ())->size = 0;

    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_& vd = vs.data[vs.size++];

    vd.func = 0;
    vd.state = 0;
    vd.count = 0;
    typedef ::fhir::DomainResource_pskel base;
    base::_pre_e_validate ();
  }

  void ImmunizationEvaluation_pskel::
  _post_e_validate ()
  {
    ::xsde::cxx::parser::context& ctx = this->_context ();

    typedef ::fhir::DomainResource_pskel base;
    base::_post_e_validate ();

    if (ctx.error_type ())
      return;

    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_* vd = vs.data + (vs.size - 1);

    ::xsde::cxx::ro_string empty;
    while (vd->func != 0)
    {
      (this->*vd->func) (vd->state, vd->count, empty, empty, true);

      if (ctx.error_type ())
        return;

      assert (vd->state == ~0UL);
      vd = vs.data + (--vs.size - 1);
    }

    if (vd->count < 1UL)
      this->_schema_error (::xsde::cxx::schema_error::expected_element);

    this->v_state_stack_.pop ();
  }

  void ImmunizationEvaluation_pskel::
  sequence_0 (unsigned long& state,
              unsigned long& count,
              const ::xsde::cxx::ro_string& ns,
              const ::xsde::cxx::ro_string& n,
              bool start)
  {
    ::xsde::cxx::parser::context& ctx = this->_context ();

    XSDE_UNUSED (ctx);

    switch (state)
    {
      case 0UL:
      {
        if (n == "identifier" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->identifier_parser_)
            {
              this->identifier_parser_->pre ();
              ctx.nested_parser (this->identifier_parser_);
            }
          }
          else
          {
            if (this->identifier_parser_ != 0)
            {
              this->identifier_parser_->post_Identifier ();
              this->identifier ();
            }

            count++;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 1UL;
          // Fall through.
        }
      }
      case 1UL:
      {
        if (n == "status" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->status_parser_)
            {
              this->status_parser_->pre ();
              ctx.nested_parser (this->status_parser_);
            }
          }
          else
          {
            if (this->status_parser_ != 0)
            {
              this->status_parser_->post_ImmunizationEvaluationStatusCodes ();
              this->status ();
            }

            count = 0;
            state = 2UL;
          }

          break;
        }
        else
        {
          assert (start);
          if (count < 1UL)
          {
            this->_schema_error (::xsde::cxx::schema_error::expected_element);
            break;
          }

          count = 0;
          state = 2UL;
          // Fall through.
        }
      }
      case 2UL:
      {
        if (n == "patient" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->patient_parser_)
            {
              this->patient_parser_->pre ();
              ctx.nested_parser (this->patient_parser_);
            }
          }
          else
          {
            if (this->patient_parser_ != 0)
            {
              this->patient_parser_->post_Reference ();
              this->patient ();
            }

            count = 0;
            state = 3UL;
          }

          break;
        }
        else
        {
          assert (start);
          if (count < 1UL)
          {
            this->_schema_error (::xsde::cxx::schema_error::expected_element);
            break;
          }

          count = 0;
          state = 3UL;
          // Fall through.
        }
      }
      case 3UL:
      {
        if (n == "date" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->date_parser_)
            {
              this->date_parser_->pre ();
              ctx.nested_parser (this->date_parser_);
            }
          }
          else
          {
            if (this->date_parser_ != 0)
            {
              this->date_parser_->post_dateTime ();
              this->date ();
            }

            count = 0;
            state = 4UL;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 4UL;
          // Fall through.
        }
      }
      case 4UL:
      {
        if (n == "authority" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->authority_parser_)
            {
              this->authority_parser_->pre ();
              ctx.nested_parser (this->authority_parser_);
            }
          }
          else
          {
            if (this->authority_parser_ != 0)
            {
              this->authority_parser_->post_Reference ();
              this->authority ();
            }

            count = 0;
            state = 5UL;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 5UL;
          // Fall through.
        }
      }
      case 5UL:
      {
        if (n == "targetDisease" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->targetDisease_parser_)
            {
              this->targetDisease_parser_->pre ();
              ctx.nested_parser (this->targetDisease_parser_);
            }
          }
          else
          {
            if (this->targetDisease_parser_ != 0)
            {
              this->targetDisease_parser_->post_CodeableConcept ();
              this->targetDisease ();
            }

            count = 0;
            state = 6UL;
          }

          break;
        }
        else
        {
          assert (start);
          if (count < 1UL)
          {
            this->_schema_error (::xsde::cxx::schema_error::expected_element);
            break;
          }

          count = 0;
          state = 6UL;
          // Fall through.
        }
      }
      case 6UL:
      {
        if (n == "immunizationEvent" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->immunizationEvent_parser_)
            {
              this->immunizationEvent_parser_->pre ();
              ctx.nested_parser (this->immunizationEvent_parser_);
            }
          }
          else
          {
            if (this->immunizationEvent_parser_ != 0)
            {
              this->immunizationEvent_parser_->post_Reference ();
              this->immunizationEvent ();
            }

            count = 0;
            state = 7UL;
          }

          break;
        }
        else
        {
          assert (start);
          if (count < 1UL)
          {
            this->_schema_error (::xsde::cxx::schema_error::expected_element);
            break;
          }

          count = 0;
          state = 7UL;
          // Fall through.
        }
      }
      case 7UL:
      {
        if (n == "doseStatus" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->doseStatus_parser_)
            {
              this->doseStatus_parser_->pre ();
              ctx.nested_parser (this->doseStatus_parser_);
            }
          }
          else
          {
            if (this->doseStatus_parser_ != 0)
            {
              this->doseStatus_parser_->post_CodeableConcept ();
              this->doseStatus ();
            }

            count = 0;
            state = 8UL;
          }

          break;
        }
        else
        {
          assert (start);
          if (count < 1UL)
          {
            this->_schema_error (::xsde::cxx::schema_error::expected_element);
            break;
          }

          count = 0;
          state = 8UL;
          // Fall through.
        }
      }
      case 8UL:
      {
        if (n == "doseStatusReason" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->doseStatusReason_parser_)
            {
              this->doseStatusReason_parser_->pre ();
              ctx.nested_parser (this->doseStatusReason_parser_);
            }
          }
          else
          {
            if (this->doseStatusReason_parser_ != 0)
            {
              this->doseStatusReason_parser_->post_CodeableConcept ();
              this->doseStatusReason ();
            }

            count++;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 9UL;
          // Fall through.
        }
      }
      case 9UL:
      {
        if (n == "description" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->description_parser_)
            {
              this->description_parser_->pre ();
              ctx.nested_parser (this->description_parser_);
            }
          }
          else
          {
            if (this->description_parser_ != 0)
            {
              this->description_parser_->post_string ();
              this->description ();
            }

            count = 0;
            state = 10UL;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 10UL;
          // Fall through.
        }
      }
      case 10UL:
      {
        if (n == "series" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->series_parser_)
            {
              this->series_parser_->pre ();
              ctx.nested_parser (this->series_parser_);
            }
          }
          else
          {
            if (this->series_parser_ != 0)
            {
              this->series_parser_->post_string ();
              this->series ();
            }

            count = 0;
            state = 11UL;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 11UL;
          // Fall through.
        }
      }
      case 11UL:
      {
        if (n == "doseNumberPositiveInt" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->doseNumberPositiveInt_parser_)
            {
              this->doseNumberPositiveInt_parser_->pre ();
              ctx.nested_parser (this->doseNumberPositiveInt_parser_);
            }
          }
          else
          {
            if (this->doseNumberPositiveInt_parser_ != 0)
            {
              this->doseNumberPositiveInt_parser_->post_positiveInt ();
              this->doseNumberPositiveInt ();
            }

            count = 0;
            state = 12UL;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 12UL;
          // Fall through.
        }
      }
      case 12UL:
      {
        if (n == "doseNumberString" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->doseNumberString_parser_)
            {
              this->doseNumberString_parser_->pre ();
              ctx.nested_parser (this->doseNumberString_parser_);
            }
          }
          else
          {
            if (this->doseNumberString_parser_ != 0)
            {
              this->doseNumberString_parser_->post_string ();
              this->doseNumberString ();
            }

            count = 0;
            state = 13UL;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 13UL;
          // Fall through.
        }
      }
      case 13UL:
      {
        if (n == "seriesDosesPositiveInt" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->seriesDosesPositiveInt_parser_)
            {
              this->seriesDosesPositiveInt_parser_->pre ();
              ctx.nested_parser (this->seriesDosesPositiveInt_parser_);
            }
          }
          else
          {
            if (this->seriesDosesPositiveInt_parser_ != 0)
            {
              this->seriesDosesPositiveInt_parser_->post_positiveInt ();
              this->seriesDosesPositiveInt ();
            }

            count = 0;
            state = 14UL;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 14UL;
          // Fall through.
        }
      }
      case 14UL:
      {
        if (n == "seriesDosesString" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->seriesDosesString_parser_)
            {
              this->seriesDosesString_parser_->pre ();
              ctx.nested_parser (this->seriesDosesString_parser_);
            }
          }
          else
          {
            if (this->seriesDosesString_parser_ != 0)
            {
              this->seriesDosesString_parser_->post_string ();
              this->seriesDosesString ();
            }

            count = 0;
            state = ~0UL;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = ~0UL;
          // Fall through.
        }
      }
      case ~0UL:
        break;
    }
  }
}

namespace fhir
{
  // Attribute validation and dispatch functions for ImmunizationEvaluationStatusCodes_pskel.
  //
  bool ImmunizationEvaluationStatusCodes_pskel::
  _attribute_impl_phase_one (const ::xsde::cxx::ro_string& ns,
                             const ::xsde::cxx::ro_string& n,
                             const ::xsde::cxx::ro_string& s)
  {
    ::xsde::cxx::parser::context& ctx = this->_context ();

    if (n == "value" && ns.empty ())
    {
      if (this->value_parser_)
      {
        this->value_parser_->pre ();

        this->value_parser_->_pre_impl (ctx);

        if (!ctx.error_type ())
          this->value_parser_->_characters (s);

        if (!ctx.error_type ())
          this->value_parser_->_post_impl ();

        if (!ctx.error_type ())
          this->value_parser_->post_ImmunizationEvaluationStatusCodes_list ();

        this->value ();
      }

      return true;
    }

    typedef ::fhir::Element_pskel base;
    return base::_attribute_impl_phase_one (ns, n, s);
  }
}

namespace fhir
{
}

#include <xsde/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

