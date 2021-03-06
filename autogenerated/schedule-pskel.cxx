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

#include "schedule-pskel.hxx"

namespace fhir
{
  // Schedule_pskel
  //

  void Schedule_pskel::
  identifier_parser (::fhir::Identifier_pskel& p)
  {
    this->identifier_parser_ = &p;
  }

  void Schedule_pskel::
  active_parser (::fhir::boolean_pskel& p)
  {
    this->active_parser_ = &p;
  }

  void Schedule_pskel::
  serviceCategory_parser (::fhir::CodeableConcept_pskel& p)
  {
    this->serviceCategory_parser_ = &p;
  }

  void Schedule_pskel::
  serviceType_parser (::fhir::CodeableConcept_pskel& p)
  {
    this->serviceType_parser_ = &p;
  }

  void Schedule_pskel::
  specialty_parser (::fhir::CodeableConcept_pskel& p)
  {
    this->specialty_parser_ = &p;
  }

  void Schedule_pskel::
  actor_parser (::fhir::Reference_pskel& p)
  {
    this->actor_parser_ = &p;
  }

  void Schedule_pskel::
  planningHorizon_parser (::fhir::Period_pskel& p)
  {
    this->planningHorizon_parser_ = &p;
  }

  void Schedule_pskel::
  comment_parser (::fhir::string_pskel& p)
  {
    this->comment_parser_ = &p;
  }

  void Schedule_pskel::
  parsers (::fhir::id_pskel& id,
           ::fhir::Meta_pskel& meta,
           ::fhir::uri_pskel& implicitRules,
           ::fhir::code_pskel& language,
           ::fhir::Narrative_pskel& text,
           ::fhir::ResourceContainer_pskel& contained,
           ::fhir::Extension_pskel& extension,
           ::fhir::Extension_pskel& modifierExtension,
           ::fhir::Identifier_pskel& identifier,
           ::fhir::boolean_pskel& active,
           ::fhir::CodeableConcept_pskel& serviceCategory,
           ::fhir::CodeableConcept_pskel& serviceType,
           ::fhir::CodeableConcept_pskel& specialty,
           ::fhir::Reference_pskel& actor,
           ::fhir::Period_pskel& planningHorizon,
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
    this->active_parser_ = &active;
    this->serviceCategory_parser_ = &serviceCategory;
    this->serviceType_parser_ = &serviceType;
    this->specialty_parser_ = &specialty;
    this->actor_parser_ = &actor;
    this->planningHorizon_parser_ = &planningHorizon;
    this->comment_parser_ = &comment;
  }

  Schedule_pskel::
  Schedule_pskel (::fhir::DomainResource_pskel* tiein)
  : ::fhir::DomainResource_pskel (tiein, 0),
    Schedule_impl_ (0),
    identifier_parser_ (0),
    active_parser_ (0),
    serviceCategory_parser_ (0),
    serviceType_parser_ (0),
    specialty_parser_ (0),
    actor_parser_ (0),
    planningHorizon_parser_ (0),
    comment_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }

  Schedule_pskel::
  Schedule_pskel (Schedule_pskel* impl, void*)
  : ::fhir::DomainResource_pskel (impl, 0),
    Schedule_impl_ (impl),
    identifier_parser_ (0),
    active_parser_ (0),
    serviceCategory_parser_ (0),
    serviceType_parser_ (0),
    specialty_parser_ (0),
    actor_parser_ (0),
    planningHorizon_parser_ (0),
    comment_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }
}

#include <assert.h>

namespace fhir
{
  // Schedule_pskel
  //

  void Schedule_pskel::
  identifier ()
  {
    if (this->Schedule_impl_)
      this->Schedule_impl_->identifier ();
  }

  void Schedule_pskel::
  active ()
  {
    if (this->Schedule_impl_)
      this->Schedule_impl_->active ();
  }

  void Schedule_pskel::
  serviceCategory ()
  {
    if (this->Schedule_impl_)
      this->Schedule_impl_->serviceCategory ();
  }

  void Schedule_pskel::
  serviceType ()
  {
    if (this->Schedule_impl_)
      this->Schedule_impl_->serviceType ();
  }

  void Schedule_pskel::
  specialty ()
  {
    if (this->Schedule_impl_)
      this->Schedule_impl_->specialty ();
  }

  void Schedule_pskel::
  actor ()
  {
    if (this->Schedule_impl_)
      this->Schedule_impl_->actor ();
  }

  void Schedule_pskel::
  planningHorizon ()
  {
    if (this->Schedule_impl_)
      this->Schedule_impl_->planningHorizon ();
  }

  void Schedule_pskel::
  comment ()
  {
    if (this->Schedule_impl_)
      this->Schedule_impl_->comment ();
  }

  void Schedule_pskel::
  post_Schedule ()
  {
    if (this->Schedule_impl_)
      this->Schedule_impl_->post_Schedule ();
    else
      post_DomainResource ();
  }

  void Schedule_pskel::
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

    if (this->active_parser_)
      this->active_parser_->_reset ();

    if (this->serviceCategory_parser_)
      this->serviceCategory_parser_->_reset ();

    if (this->serviceType_parser_)
      this->serviceType_parser_->_reset ();

    if (this->specialty_parser_)
      this->specialty_parser_->_reset ();

    if (this->actor_parser_)
      this->actor_parser_->_reset ();

    if (this->planningHorizon_parser_)
      this->planningHorizon_parser_->_reset ();

    if (this->comment_parser_)
      this->comment_parser_->_reset ();

    this->resetting_ = false;
  }
}

#include <assert.h>

namespace fhir
{
  // Element validation and dispatch functions for Schedule_pskel.
  //
  bool Schedule_pskel::
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
        else if (n == "active" &&
                 ns == "http://hl7.org/fhir")
          s = 1UL;
        else if (n == "serviceCategory" &&
                 ns == "http://hl7.org/fhir")
          s = 2UL;
        else if (n == "serviceType" &&
                 ns == "http://hl7.org/fhir")
          s = 3UL;
        else if (n == "specialty" &&
                 ns == "http://hl7.org/fhir")
          s = 4UL;
        else if (n == "actor" &&
                 ns == "http://hl7.org/fhir")
          s = 5UL;

        if (s != ~0UL)
        {
          vd->count++;
          vd->state = ~0UL;

          vd = vs.data + vs.size++;
          vd->func = &Schedule_pskel::sequence_0;
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

  bool Schedule_pskel::
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

  void Schedule_pskel::
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

  void Schedule_pskel::
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

  void Schedule_pskel::
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
        if (n == "active" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->active_parser_)
            {
              this->active_parser_->pre ();
              ctx.nested_parser (this->active_parser_);
            }
          }
          else
          {
            if (this->active_parser_ != 0)
            {
              this->active_parser_->post_boolean ();
              this->active ();
            }

            count = 0;
            state = 2UL;
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
          state = 3UL;
          // Fall through.
        }
      }
      case 3UL:
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
          state = 4UL;
          // Fall through.
        }
      }
      case 4UL:
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
          state = 5UL;
          // Fall through.
        }
      }
      case 5UL:
      {
        if (n == "actor" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->actor_parser_)
            {
              this->actor_parser_->pre ();
              ctx.nested_parser (this->actor_parser_);
            }
          }
          else
          {
            if (this->actor_parser_ != 0)
            {
              this->actor_parser_->post_Reference ();
              this->actor ();
            }

            count++;
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
        if (n == "planningHorizon" &&
            ns == "http://hl7.org/fhir")
        {
          if (start)
          {
            if (this->planningHorizon_parser_)
            {
              this->planningHorizon_parser_->pre ();
              ctx.nested_parser (this->planningHorizon_parser_);
            }
          }
          else
          {
            if (this->planningHorizon_parser_ != 0)
            {
              this->planningHorizon_parser_->post_Period ();
              this->planningHorizon ();
            }

            count = 0;
            state = 7UL;
          }

          break;
        }
        else
        {
          assert (start);
          count = 0;
          state = 7UL;
          // Fall through.
        }
      }
      case 7UL:
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
}

namespace fhir
{
}

#include <xsde/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

