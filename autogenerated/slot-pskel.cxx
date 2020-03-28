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

#include "slot-pskel.hxx"

namespace fhir
{
  // Slot_pskel
  //

  void Slot_pskel::
  identifier_parser (::fhir::Identifier_pskel& p)
  {
    this->identifier_parser_ = &p;
  }

  void Slot_pskel::
  serviceCategory_parser (::fhir::CodeableConcept_pskel& p)
  {
    this->serviceCategory_parser_ = &p;
  }

  void Slot_pskel::
  serviceType_parser (::fhir::CodeableConcept_pskel& p)
  {
    this->serviceType_parser_ = &p;
  }

  void Slot_pskel::
  specialty_parser (::fhir::CodeableConcept_pskel& p)
  {
    this->specialty_parser_ = &p;
  }

  void Slot_pskel::
  appointmentType_parser (::fhir::CodeableConcept_pskel& p)
  {
    this->appointmentType_parser_ = &p;
  }

  void Slot_pskel::
  schedule_parser (::fhir::Reference_pskel& p)
  {
    this->schedule_parser_ = &p;
  }

  void Slot_pskel::
  status_parser (::fhir::SlotStatus_pskel& p)
  {
    this->status_parser_ = &p;
  }

  void Slot_pskel::
  start_parser (::fhir::instant_pskel& p)
  {
    this->start_parser_ = &p;
  }

  void Slot_pskel::
  end_parser (::fhir::instant_pskel& p)
  {
    this->end_parser_ = &p;
  }

  void Slot_pskel::
  overbooked_parser (::fhir::boolean_pskel& p)
  {
    this->overbooked_parser_ = &p;
  }

  void Slot_pskel::
  comment_parser (::fhir::string_pskel& p)
  {
    this->comment_parser_ = &p;
  }

  void Slot_pskel::
  parsers (::fhir::id_pskel& id,
           ::fhir::Meta_pskel& meta,
           ::fhir::uri_pskel& implicitRules,
           ::fhir::code_pskel& language,
           ::fhir::Narrative_pskel& text,
           ::fhir::ResourceContainer_pskel& contained,
           ::fhir::Extension_pskel& extension,
           ::fhir::Extension_pskel& modifierExtension,
           ::fhir::Identifier_pskel& identifier,
           ::fhir::CodeableConcept_pskel& serviceCategory,
           ::fhir::CodeableConcept_pskel& serviceType,
           ::fhir::CodeableConcept_pskel& specialty,
           ::fhir::CodeableConcept_pskel& appointmentType,
           ::fhir::Reference_pskel& schedule,
           ::fhir::SlotStatus_pskel& status,
           ::fhir::instant_pskel& start,
           ::fhir::instant_pskel& end,
           ::fhir::boolean_pskel& overbooked,
           ::fhir::string_pskel& comment)
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
    this->serviceCategory_parser_ = &serviceCategory;
    this->serviceType_parser_ = &serviceType;
    this->specialty_parser_ = &specialty;
    this->appointmentType_parser_ = &appointmentType;
    this->schedule_parser_ = &schedule;
    this->status_parser_ = &status;
    this->start_parser_ = &start;
    this->end_parser_ = &end;
    this->overbooked_parser_ = &overbooked;
    this->comment_parser_ = &comment;
  }

  Slot_pskel::
  Slot_pskel (::fhir::DomainResource_pskel* tiein)
  : ::fhir::DomainResource_pskel (tiein, 0),
    Slot_impl_ (0),
    identifier_parser_ (0),
    serviceCategory_parser_ (0),
    serviceType_parser_ (0),
    specialty_parser_ (0),
    appointmentType_parser_ (0),
    schedule_parser_ (0),
    status_parser_ (0),
    start_parser_ (0),
    end_parser_ (0),
    overbooked_parser_ (0),
    comment_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }

  Slot_pskel::
  Slot_pskel (Slot_pskel* impl, void*)
  : ::fhir::DomainResource_pskel (impl, 0),
    Slot_impl_ (impl),
    identifier_parser_ (0),
    serviceCategory_parser_ (0),
    serviceType_parser_ (0),
    specialty_parser_ (0),
    appointmentType_parser_ (0),
    schedule_parser_ (0),
    status_parser_ (0),
    start_parser_ (0),
    end_parser_ (0),
    overbooked_parser_ (0),
    comment_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }

  // SlotStatus_list_pskel
  //

  SlotStatus_list_pskel::
  SlotStatus_list_pskel (::fhir::code_primitive_pskel* tiein)
  : ::fhir::code_primitive_pskel (tiein, 0),
    SlotStatus_list_impl_ (0)
  {
    this->_enumeration_facet (_xsde_SlotStatus_list_pskel_enums_, 5UL);
  }

  SlotStatus_list_pskel::
  SlotStatus_list_pskel (SlotStatus_list_pskel* impl, void*)
  : ::fhir::code_primitive_pskel (impl, 0),
    SlotStatus_list_impl_ (impl)
  {
    this->_enumeration_facet (_xsde_SlotStatus_list_pskel_enums_, 5UL);
  }

  // SlotStatus_pskel
  //

  void SlotStatus_pskel::
  value_parser (::fhir::SlotStatus_list_pskel& p)
  {
    this->value_parser_ = &p;
  }

  void SlotStatus_pskel::
  parsers (::fhir::string_primitive_pskel& id,
           ::fhir::Extension_pskel& extension,
           ::fhir::SlotStatus_list_pskel& value)
  {
    this->id_parser_ = &id;
    this->extension_parser_ = &extension;
    this->value_parser_ = &value;
  }

  SlotStatus_pskel::
  SlotStatus_pskel (::fhir::Element_pskel* tiein)
  : ::fhir::Element_pskel (tiein, 0),
    SlotStatus_impl_ (0),
    value_parser_ (0)
  {
  }

  SlotStatus_pskel::
  SlotStatus_pskel (SlotStatus_pskel* impl, void*)
  : ::fhir::Element_pskel (impl, 0),
    SlotStatus_impl_ (impl),
    value_parser_ (0)
  {
  }
}

#include <assert.h>

namespace fhir
{
  // Slot_pskel
  //

  void Slot_pskel::
  identifier ()
  {
    if (this->Slot_impl_)
      this->Slot_impl_->identifier ();
  }

  void Slot_pskel::
  serviceCategory ()
  {
    if (this->Slot_impl_)
      this->Slot_impl_->serviceCategory ();
  }

  void Slot_pskel::
  serviceType ()
  {
    if (this->Slot_impl_)
      this->Slot_impl_->serviceType ();
  }

  void Slot_pskel::
  specialty ()
  {
    if (this->Slot_impl_)
      this->Slot_impl_->specialty ();
  }

  void Slot_pskel::
  appointmentType ()
  {
    if (this->Slot_impl_)
      this->Slot_impl_->appointmentType ();
  }

  void Slot_pskel::
  schedule ()
  {
    if (this->Slot_impl_)
      this->Slot_impl_->schedule ();
  }

  void Slot_pskel::
  status ()
  {
    if (this->Slot_impl_)
      this->Slot_impl_->status ();
  }

  void Slot_pskel::
  start ()
  {
    if (this->Slot_impl_)
      this->Slot_impl_->start ();
  }

  void Slot_pskel::
  end ()
  {
    if (this->Slot_impl_)
      this->Slot_impl_->end ();
  }

  void Slot_pskel::
  overbooked ()
  {
    if (this->Slot_impl_)
      this->Slot_impl_->overbooked ();
  }

  void Slot_pskel::
  comment ()
  {
    if (this->Slot_impl_)
      this->Slot_impl_->comment ();
  }

  void Slot_pskel::
  post_Slot ()
  {
    if (this->Slot_impl_)
      this->Slot_impl_->post_Slot ();
    else
      post_DomainResource ();
  }

  void Slot_pskel::
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

    if (this->serviceCategory_parser_)
      this->serviceCategory_parser_->_reset ();

    if (this->serviceType_parser_)
      this->serviceType_parser_->_reset ();

    if (this->specialty_parser_)
      this->specialty_parser_->_reset ();

    if (this->appointmentType_parser_)
      this->appointmentType_parser_->_reset ();

    if (this->schedule_parser_)
      this->schedule_parser_->_reset ();

    if (this->status_parser_)
      this->status_parser_->_reset ();

    if (this->start_parser_)
      this->start_parser_->_reset ();

    if (this->end_parser_)
      this->end_parser_->_reset ();

    if (this->overbooked_parser_)
      this->overbooked_parser_->_reset ();

    if (this->comment_parser_)
      this->comment_parser_->_reset ();

    this->resetting_ = false;
  }

  // SlotStatus_list_pskel
  //

  void SlotStatus_list_pskel::
  post_SlotStatus_list ()
  {
    if (this->SlotStatus_list_impl_)
      this->SlotStatus_list_impl_->post_SlotStatus_list ();
    else
      post_code_primitive ();
  }

  const char* const SlotStatus_list_pskel::_xsde_SlotStatus_list_pskel_enums_[5UL] = 
  {
    "busy",
    "busy-tentative",
    "busy-unavailable",
    "entered-in-error",
    "free"
  };

  // SlotStatus_pskel
  //

  void SlotStatus_pskel::
  value ()
  {
    if (this->SlotStatus_impl_)
      this->SlotStatus_impl_->value ();
  }

  void SlotStatus_pskel::
  post_SlotStatus ()
  {
    if (this->SlotStatus_impl_)
      this->SlotStatus_impl_->post_SlotStatus ();
    else
      post_Element ();
  }

  void SlotStatus_pskel::
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
  // Element validation and dispatch functions for Slot_pskel.
  //
  bool Slot_pskel::
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
        else if (n == "serviceCategory" &&
                 ns == "http://hl7.org/fhir")
          s = 1UL;
        else if (n == "serviceType" &&
                 ns == "http://hl7.org/fhir")
          s = 2UL;
        else if (n == "specialty" &&
                 ns == "http://hl7.org/fhir")
          s = 3UL;
        else if (n == "appointmentType" &&
                 ns == "http://hl7.org/fhir")
          s = 4UL;
        else if (n == "schedule" &&
                 ns == "http://hl7.org/fhir")
          s = 5UL;

        if (s != ~0UL)
        {
          vd->count++;
          vd->state = ~0UL;

          vd = vs.data + vs.size++;
          vd->func = &Slot_pskel::sequence_0;
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

  bool Slot_pskel::
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

  void Slot_pskel::
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

  void Slot_pskel::
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

  void Slot_pskel::
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
        if (n == "serviceCategory" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->serviceCategory_parser_)
            {
              this->serviceCategory_parser_->pre ();
              ctx.nested_parser (this->serviceCategory_parser_);
            }
          }
          else
          {
            if (this->serviceCategory_parser_ != 0)
            {
              this->serviceCategory_parser_->post_CodeableConcept ();
              this->serviceCategory ();
            }

            count++;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 2UL;
          // Fall through.
        }
      }
      case 2UL:
      {
        if (n == "serviceType" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->serviceType_parser_)
            {
              this->serviceType_parser_->pre ();
              ctx.nested_parser (this->serviceType_parser_);
            }
          }
          else
          {
            if (this->serviceType_parser_ != 0)
            {
              this->serviceType_parser_->post_CodeableConcept ();
              this->serviceType ();
            }

            count++;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 3UL;
          // Fall through.
        }
      }
      case 3UL:
      {
        if (n == "specialty" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->specialty_parser_)
            {
              this->specialty_parser_->pre ();
              ctx.nested_parser (this->specialty_parser_);
            }
          }
          else
          {
            if (this->specialty_parser_ != 0)
            {
              this->specialty_parser_->post_CodeableConcept ();
              this->specialty ();
            }

            count++;
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
        if (n == "appointmentType" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->appointmentType_parser_)
            {
              this->appointmentType_parser_->pre ();
              ctx.nested_parser (this->appointmentType_parser_);
            }
          }
          else
          {
            if (this->appointmentType_parser_ != 0)
            {
              this->appointmentType_parser_->post_CodeableConcept ();
              this->appointmentType ();
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
        if (n == "schedule" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->schedule_parser_)
            {
              this->schedule_parser_->pre ();
              ctx.nested_parser (this->schedule_parser_);
            }
          }
          else
          {
            if (this->schedule_parser_ != 0)
            {
              this->schedule_parser_->post_Reference ();
              this->schedule ();
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
              this->status_parser_->post_SlotStatus ();
              this->status ();
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
        if (n == "start" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->start_parser_)
            {
              this->start_parser_->pre ();
              ctx.nested_parser (this->start_parser_);
            }
          }
          else
          {
            if (this->start_parser_ != 0)
            {
              this->start_parser_->post_instant ();
              this->start ();
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
        if (n == "end" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->end_parser_)
            {
              this->end_parser_->pre ();
              ctx.nested_parser (this->end_parser_);
            }
          }
          else
          {
            if (this->end_parser_ != 0)
            {
              this->end_parser_->post_instant ();
              this->end ();
            }

            count = 0;
            state = 9UL;
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
          state = 9UL;
          // Fall through.
        }
      }
      case 9UL:
      {
        if (n == "overbooked" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->overbooked_parser_)
            {
              this->overbooked_parser_->pre ();
              ctx.nested_parser (this->overbooked_parser_);
            }
          }
          else
          {
            if (this->overbooked_parser_ != 0)
            {
              this->overbooked_parser_->post_boolean ();
              this->overbooked ();
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
        if (n == "comment" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->comment_parser_)
            {
              this->comment_parser_->pre ();
              ctx.nested_parser (this->comment_parser_);
            }
          }
          else
          {
            if (this->comment_parser_ != 0)
            {
              this->comment_parser_->post_string ();
              this->comment ();
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
  // Attribute validation and dispatch functions for SlotStatus_pskel.
  //
  bool SlotStatus_pskel::
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
          this->value_parser_->post_SlotStatus_list ();

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

