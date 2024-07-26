#include <cstddef>
#include "casm/clexulator/BaseClexulator.hh"
#include "casm/global/eigen.hh"
#include "casm/clexulator/BasicClexParamPack.hh"




/****** PROJECT SPECIFICATIONS ******

         ****** prim.json ******

{
  "basis" : [
    {
      "coordinate" : [ 0.000000000000, 0.000000000000, 0.000000000000 ],
      "occupants" : [ "Zr" ]
    },
    {
      "coordinate" : [ 0.666666666667, 0.333333333333, 0.500000000000 ],
      "occupants" : [ "Zr" ]
    },
    {
      "coordinate" : [ 0.333333333333, 0.666666666667, 0.250000000000 ],
      "occupants" : [ "Va", "O" ]
    },
    {
      "coordinate" : [ 0.333333333333, 0.666666666667, 0.750000000000 ],
      "occupants" : [ "Va", "O" ]
    }
  ],
  "coordinate_mode" : "Fractional",
  "lattice_vectors" : [
    [ 3.233986860000, 0.000000000000, 0.000000000000 ],
    [ -1.616993430000, 2.800714770000, 0.000000000000 ],
    [ 0.000000000000, 0.000000000000, 5.168678340000 ]
  ],
  "title" : "ZrO"
}

        ****** bspecs.json ******

{
  "basis_function_specs" : {
    "dof_specs" : {
      "occ" : {
        "site_basis_functions" : "OCCUPATION"
      }
    },
    "dofs" : [ "occ" ],
    "global_max_poly_order" : -1,
    "param_pack_type" : "DEFAULT"
  },
  "cluster_specs" : {
    "method" : "local_max_length",
    "params" : {
      "generating_group" : [ 0, 7, 14, 23 ],
      "orbit_branch_specs" : {
        "0" : {
          "cutoff_radius" : 0.000000000000,
          "max_length" : 0.000000000000
        },
        "1" : {
          "cutoff_radius" : 4.010000000000,
          "max_length" : 0.000000000000
        },
        "2" : {
          "cutoff_radius" : 4.010000000000,
          "max_length" : 4.010000000000
        }
      },
      "phenomenal" : {
        "max_length" : 3.233986854574,
        "min_length" : 3.233986854574,
        "sites" : [
          [ 3, 0, 0, 0 ],
          [ 3, 1, 1, 0 ]
        ]
      }
    }
  }
}

**/


/// \brief Returns a clexulator::BaseClexulator* owning a ZrO_Clexulator_hop1
extern "C" CASM::clexulator::BaseClexulator *make_ZrO_Clexulator_hop1();

namespace CASM {
namespace clexulator {

  /****** GENERATED CLEXPARAMPACK DEFINITION ******/


  typedef BasicClexParamPack ParamPack;


  /****** GENERATED CLEXULATOR DEFINITION ******/

  class ZrO_Clexulator_hop1 : public clexulator::BaseClexulator {

  public:

    ZrO_Clexulator_hop1();

    ~ZrO_Clexulator_hop1();

    ClexParamPack const &param_pack() const override {
      return m_params;
    }

    ClexParamPack &param_pack() override {
      return m_params;
    }


    template<typename Scalar>
    Scalar eval_bfunc_0_0() const;

    template<typename Scalar>
    Scalar eval_bfunc_1_0() const;

    template<typename Scalar>
    Scalar site_eval_bfunc_1_0_at_9() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_1_0_at_11() const;
    template<typename Scalar>
    Scalar site_deval_bfunc_1_0_at_9(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar site_deval_bfunc_1_0_at_11(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar eval_bfunc_2_0() const;

    template<typename Scalar>
    Scalar site_eval_bfunc_2_0_at_0() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_2_0_at_16() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_2_0_at_12() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_2_0_at_52() const;
    template<typename Scalar>
    Scalar site_deval_bfunc_2_0_at_0(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar site_deval_bfunc_2_0_at_16(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar site_deval_bfunc_2_0_at_12(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar site_deval_bfunc_2_0_at_52(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar eval_bfunc_3_0() const;

    template<typename Scalar>
    Scalar site_eval_bfunc_3_0_at_5() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_3_0_at_7() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_3_0_at_27() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_3_0_at_29() const;
    template<typename Scalar>
    Scalar site_deval_bfunc_3_0_at_5(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar site_deval_bfunc_3_0_at_7(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar site_deval_bfunc_3_0_at_27(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar site_deval_bfunc_3_0_at_29(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar eval_bfunc_4_0() const;

    template<typename Scalar>
    Scalar site_eval_bfunc_4_0_at_3() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_4_0_at_65() const;

    template<typename Scalar>
    Scalar site_deval_bfunc_4_0_at_3(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar site_deval_bfunc_4_0_at_65(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar eval_bfunc_5_0() const;

    template<typename Scalar>
    Scalar site_eval_bfunc_5_0_at_0() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_5_0_at_16() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_5_0_at_12() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_5_0_at_52() const;
    template<typename Scalar>
    Scalar site_deval_bfunc_5_0_at_0(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar site_deval_bfunc_5_0_at_16(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar site_deval_bfunc_5_0_at_12(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar site_deval_bfunc_5_0_at_52(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar eval_bfunc_6_0() const;

    template<typename Scalar>
    Scalar site_eval_bfunc_6_0_at_5() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_6_0_at_7() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_6_0_at_9() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_6_0_at_11() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_6_0_at_27() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_6_0_at_29() const;
    template<typename Scalar>
    Scalar site_deval_bfunc_6_0_at_5(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar site_deval_bfunc_6_0_at_7(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar site_deval_bfunc_6_0_at_9(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar site_deval_bfunc_6_0_at_11(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar site_deval_bfunc_6_0_at_27(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar site_deval_bfunc_6_0_at_29(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar eval_bfunc_7_0() const;

    template<typename Scalar>
    Scalar site_eval_bfunc_7_0_at_3() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_7_0_at_5() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_7_0_at_7() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_7_0_at_27() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_7_0_at_29() const;
    template<typename Scalar>
    Scalar site_eval_bfunc_7_0_at_65() const;

    template<typename Scalar>
    Scalar site_deval_bfunc_7_0_at_3(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar site_deval_bfunc_7_0_at_5(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar site_deval_bfunc_7_0_at_7(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar site_deval_bfunc_7_0_at_27(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar site_deval_bfunc_7_0_at_29(int occ_i, int occ_f) const;

    template<typename Scalar>
    Scalar site_deval_bfunc_7_0_at_65(int occ_i, int occ_f) const;


  private:

    // ParamPack object, which stores temporary data for calculations
    mutable ParamPack m_params;

    // typedef for method pointers of scalar type double
    typedef double (ZrO_Clexulator_hop1::*BasisFuncPtr_0)() const;

    // typedef for method pointers
    typedef double (ZrO_Clexulator_hop1::*DeltaBasisFuncPtr_0)(int, int) const;

    // array of pointers to member functions for calculating basis functions of scalar type double
    BasisFuncPtr_0 m_orbit_func_table_0[8];

    // array of pointers to member functions for calculating flower functions of scalar type double
    BasisFuncPtr_0 m_flower_func_table_0[66][8];

    // array of pointers to member functions for calculating DELTA flower functions of scalar type double
    DeltaBasisFuncPtr_0 m_delta_func_table_0[66][8];

    // Occupation Function tables for basis sites in asymmetric unit 1:
    //   - basis site 2:
    double m_occ_func_2_0[2];

    //   - basis site 3:
    double m_occ_func_3_0[2];

    //ClexParamPack allocation for evaluated correlations 
    ParamPack::Key m_corr_param_key;
    //ClexParamPack allocation for DoF occ
    ParamPack::Key m_occ_site_func_param_key;

    /// \brief Clone the ZrO_Clexulator_hop1
    BaseClexulator *_clone() const override {
      return new ZrO_Clexulator_hop1(*this);
    }

    /// \brief Calculate contribution to global correlations from one unit cell
    /// Result is recorded in ClexParamPack
    void _calc_global_corr_contribution() const override;

    /// \brief Calculate contribution to global correlations from one unit cell     /// Result is recorded in double array starting at corr_begin
    void _calc_global_corr_contribution(double *corr_begin) const override;

    /// \brief Calculate contribution to select global correlations from one unit cell into ClexParamPack
    /// Result is recorded in ClexParamPack
    void _calc_restricted_global_corr_contribution(size_type const *ind_list_begin, size_type const *ind_list_end) const override;

    /// \brief Calculate contribution to select global correlations from one unit cell
    /// Result is recorded in double array starting at corr_begin
    void _calc_restricted_global_corr_contribution(double *corr_begin, size_type const *ind_list_begin, size_type const *ind_list_end) const override;

    /// \brief Calculate point correlations about neighbor site 'nlist_ind'
    /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
    /// For local clexulators, 'nlist_ind' ranges over all sites in the neighborhood
    /// Result is recorded in ClexParamPack
    void _calc_point_corr(int nlist_ind) const override;

    /// \brief Calculate point correlations about neighbor site 'nlist_ind'
    /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
    /// For local clexulators, 'nlist_ind' ranges over all sites in the neighborhood
    /// Result is recorded in double array starting at corr_begin
    void _calc_point_corr(int nlist_ind, double *corr_begin) const override;

    /// \brief Calculate select point correlations about neighbor site 'nlist_ind'
    /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
    /// For local clexulators, 'nlist_ind' ranges over all sites in the neighborhood
    /// Result is recorded in ClexParamPack
    void _calc_restricted_point_corr(int nlist_ind, size_type const *ind_list_begin, size_type const *ind_list_end) const override;

    /// \brief Calculate select point correlations about neighbor site 'nlist_ind'
    /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
    /// For local clexulators, 'nlist_ind' ranges over all sites in the neighborhood
    /// Result is recorded in double array starting at corr_begin
    void _calc_restricted_point_corr(int nlist_ind, double *corr_begin, size_type const *ind_list_begin, size_type const *ind_list_end) const override;

    /// \brief Calculate the change in point correlations due to changing an occupant at neighbor site 'nlist_ind'
    /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
    /// For local clexulators, 'nlist_ind' ranges over all sites in the neighborhood
    /// Result is recorded in ClexParamPack
    void _calc_delta_point_corr(int nlist_ind, int occ_i, int occ_f) const override;

    /// \brief Calculate the change in point correlations due to changing an occupant at neighbor site 'nlist_ind'
    /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
    /// For local clexulators, 'nlist_ind' ranges over all sites in the neighborhood
    /// Result is recorded in double array starting at corr_begin
    void _calc_delta_point_corr(int nlist_ind, int occ_i, int occ_f, double *corr_begin) const override;

    /// \brief Calculate the change in select point correlations due to changing an occupant at neighbor site 'nlist_ind'
    /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
    /// For local clexulators, 'nlist_ind' ranges over all sites in the neighborhood
    /// Result is recorded in ClexParamPack
    void _calc_restricted_delta_point_corr(int nlist_ind, int occ_i, int occ_f, size_type const *ind_list_begin, size_type const *ind_list_end) const override;

    /// \brief Calculate the change in select point correlations due to changing an occupant at neighbor site 'nlist_ind'
    /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
    /// For local clexulators, 'nlist_ind' ranges over all sites in the neighborhood
    /// Result is recorded in double array starting at corr_begin
    void _calc_restricted_delta_point_corr(int nlist_ind, int occ_i, int occ_f, double *corr_begin, size_type const *ind_list_begin, size_type const *ind_list_end) const override;

    template<typename Scalar>
    void _global_prepare() const;

    template<typename Scalar>
    void _point_prepare(int nlist_ind) const;

    // Occupation Function evaluators and accessors for basis site 2:
    double const &eval_occ_func_2_0(const int &nlist_ind) const {
      return m_occ_func_2_0[_occ(nlist_ind)];
    }

    double const &occ_func_2_0(const int &nlist_ind) const {
      return m_params.read(m_occ_site_func_param_key, 0, nlist_ind);
    }

    // Occupation Function evaluators and accessors for basis site 3:
    double const &eval_occ_func_3_0(const int &nlist_ind) const {
      return m_occ_func_3_0[_occ(nlist_ind)];
    }

    double const &occ_func_3_0(const int &nlist_ind) const {
      return m_params.read(m_occ_site_func_param_key, 0, nlist_ind);
    }

    //default functions for basis function evaluation
    template <typename Scalar>
    Scalar zero_func() const {
      return Scalar(0.0);
    }

    template <typename Scalar>
    Scalar zero_func(int, int) const {
      return Scalar(0.0);
    }


  };

  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

  ZrO_Clexulator_hop1::ZrO_Clexulator_hop1() :
    BaseClexulator(66, 8, 66) {
    m_occ_func_2_0[0] = -0.0000000000, m_occ_func_2_0[1] = 1.0000000000;

    m_occ_func_3_0[0] = -0.0000000000, m_occ_func_3_0[1] = 1.0000000000;

    m_occ_site_func_param_key = m_params.allocate("occ_site_func", 1, 66, true);

    m_corr_param_key = m_params.allocate("corr", corr_size(), 1, false);

    m_orbit_func_table_0[0] = &ZrO_Clexulator_hop1::eval_bfunc_0_0<double>;
    m_orbit_func_table_0[1] = &ZrO_Clexulator_hop1::eval_bfunc_1_0<double>;
    m_orbit_func_table_0[2] = &ZrO_Clexulator_hop1::eval_bfunc_2_0<double>;
    m_orbit_func_table_0[3] = &ZrO_Clexulator_hop1::eval_bfunc_3_0<double>;
    m_orbit_func_table_0[4] = &ZrO_Clexulator_hop1::eval_bfunc_4_0<double>;
    m_orbit_func_table_0[5] = &ZrO_Clexulator_hop1::eval_bfunc_5_0<double>;
    m_orbit_func_table_0[6] = &ZrO_Clexulator_hop1::eval_bfunc_6_0<double>;
    m_orbit_func_table_0[7] = &ZrO_Clexulator_hop1::eval_bfunc_7_0<double>;


    m_flower_func_table_0[0][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[0][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[0][2] = &ZrO_Clexulator_hop1::site_eval_bfunc_2_0_at_0<double>;
    m_flower_func_table_0[0][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[0][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[0][5] = &ZrO_Clexulator_hop1::site_eval_bfunc_5_0_at_0<double>;
    m_flower_func_table_0[0][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[0][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[1][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[1][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[1][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[1][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[1][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[1][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[1][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[1][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[2][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[2][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[2][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[2][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[2][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[2][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[2][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[2][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[3][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[3][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[3][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[3][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[3][4] = &ZrO_Clexulator_hop1::site_eval_bfunc_4_0_at_3<double>;
    m_flower_func_table_0[3][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[3][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[3][7] = &ZrO_Clexulator_hop1::site_eval_bfunc_7_0_at_3<double>;


    m_flower_func_table_0[4][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[4][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[4][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[4][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[4][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[4][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[4][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[4][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[5][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[5][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[5][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[5][3] = &ZrO_Clexulator_hop1::site_eval_bfunc_3_0_at_5<double>;
    m_flower_func_table_0[5][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[5][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[5][6] = &ZrO_Clexulator_hop1::site_eval_bfunc_6_0_at_5<double>;
    m_flower_func_table_0[5][7] = &ZrO_Clexulator_hop1::site_eval_bfunc_7_0_at_5<double>;


    m_flower_func_table_0[6][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[6][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[6][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[6][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[6][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[6][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[6][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[6][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[7][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[7][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[7][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[7][3] = &ZrO_Clexulator_hop1::site_eval_bfunc_3_0_at_7<double>;
    m_flower_func_table_0[7][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[7][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[7][6] = &ZrO_Clexulator_hop1::site_eval_bfunc_6_0_at_7<double>;
    m_flower_func_table_0[7][7] = &ZrO_Clexulator_hop1::site_eval_bfunc_7_0_at_7<double>;


    m_flower_func_table_0[8][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[8][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[8][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[8][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[8][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[8][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[8][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[8][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[9][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[9][1] = &ZrO_Clexulator_hop1::site_eval_bfunc_1_0_at_9<double>;
    m_flower_func_table_0[9][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[9][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[9][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[9][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[9][6] = &ZrO_Clexulator_hop1::site_eval_bfunc_6_0_at_9<double>;
    m_flower_func_table_0[9][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[10][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[10][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[10][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[10][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[10][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[10][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[10][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[10][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[11][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[11][1] = &ZrO_Clexulator_hop1::site_eval_bfunc_1_0_at_11<double>;
    m_flower_func_table_0[11][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[11][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[11][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[11][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[11][6] = &ZrO_Clexulator_hop1::site_eval_bfunc_6_0_at_11<double>;
    m_flower_func_table_0[11][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[12][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[12][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[12][2] = &ZrO_Clexulator_hop1::site_eval_bfunc_2_0_at_12<double>;
    m_flower_func_table_0[12][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[12][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[12][5] = &ZrO_Clexulator_hop1::site_eval_bfunc_5_0_at_12<double>;
    m_flower_func_table_0[12][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[12][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[13][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[13][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[13][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[13][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[13][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[13][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[13][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[13][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[14][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[14][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[14][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[14][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[14][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[14][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[14][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[14][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[15][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[15][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[15][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[15][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[15][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[15][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[15][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[15][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[16][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[16][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[16][2] = &ZrO_Clexulator_hop1::site_eval_bfunc_2_0_at_16<double>;
    m_flower_func_table_0[16][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[16][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[16][5] = &ZrO_Clexulator_hop1::site_eval_bfunc_5_0_at_16<double>;
    m_flower_func_table_0[16][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[16][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[17][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[17][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[17][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[17][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[17][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[17][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[17][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[17][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[18][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[18][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[18][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[18][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[18][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[18][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[18][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[18][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[19][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[19][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[19][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[19][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[19][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[19][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[19][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[19][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[20][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[20][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[20][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[20][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[20][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[20][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[20][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[20][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[21][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[21][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[21][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[21][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[21][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[21][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[21][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[21][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[22][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[22][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[22][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[22][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[22][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[22][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[22][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[22][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[23][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[23][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[23][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[23][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[23][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[23][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[23][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[23][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[24][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[24][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[24][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[24][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[24][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[24][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[24][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[24][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[25][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[25][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[25][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[25][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[25][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[25][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[25][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[25][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[26][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[26][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[26][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[26][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[26][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[26][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[26][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[26][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[27][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[27][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[27][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[27][3] = &ZrO_Clexulator_hop1::site_eval_bfunc_3_0_at_27<double>;
    m_flower_func_table_0[27][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[27][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[27][6] = &ZrO_Clexulator_hop1::site_eval_bfunc_6_0_at_27<double>;
    m_flower_func_table_0[27][7] = &ZrO_Clexulator_hop1::site_eval_bfunc_7_0_at_27<double>;


    m_flower_func_table_0[28][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[28][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[28][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[28][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[28][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[28][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[28][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[28][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[29][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[29][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[29][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[29][3] = &ZrO_Clexulator_hop1::site_eval_bfunc_3_0_at_29<double>;
    m_flower_func_table_0[29][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[29][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[29][6] = &ZrO_Clexulator_hop1::site_eval_bfunc_6_0_at_29<double>;
    m_flower_func_table_0[29][7] = &ZrO_Clexulator_hop1::site_eval_bfunc_7_0_at_29<double>;


    m_flower_func_table_0[30][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[30][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[30][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[30][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[30][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[30][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[30][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[30][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[31][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[31][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[31][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[31][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[31][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[31][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[31][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[31][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[32][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[32][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[32][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[32][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[32][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[32][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[32][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[32][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[33][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[33][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[33][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[33][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[33][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[33][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[33][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[33][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[34][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[34][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[34][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[34][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[34][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[34][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[34][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[34][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[35][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[35][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[35][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[35][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[35][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[35][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[35][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[35][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[36][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[36][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[36][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[36][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[36][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[36][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[36][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[36][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[37][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[37][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[37][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[37][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[37][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[37][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[37][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[37][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[38][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[38][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[38][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[38][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[38][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[38][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[38][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[38][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[39][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[39][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[39][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[39][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[39][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[39][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[39][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[39][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[40][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[40][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[40][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[40][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[40][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[40][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[40][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[40][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[41][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[41][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[41][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[41][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[41][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[41][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[41][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[41][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[42][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[42][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[42][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[42][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[42][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[42][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[42][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[42][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[43][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[43][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[43][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[43][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[43][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[43][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[43][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[43][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[44][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[44][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[44][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[44][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[44][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[44][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[44][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[44][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[45][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[45][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[45][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[45][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[45][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[45][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[45][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[45][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[46][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[46][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[46][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[46][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[46][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[46][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[46][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[46][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[47][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[47][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[47][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[47][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[47][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[47][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[47][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[47][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[48][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[48][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[48][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[48][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[48][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[48][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[48][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[48][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[49][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[49][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[49][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[49][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[49][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[49][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[49][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[49][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[50][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[50][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[50][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[50][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[50][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[50][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[50][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[50][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[51][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[51][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[51][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[51][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[51][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[51][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[51][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[51][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[52][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[52][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[52][2] = &ZrO_Clexulator_hop1::site_eval_bfunc_2_0_at_52<double>;
    m_flower_func_table_0[52][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[52][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[52][5] = &ZrO_Clexulator_hop1::site_eval_bfunc_5_0_at_52<double>;
    m_flower_func_table_0[52][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[52][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[53][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[53][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[53][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[53][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[53][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[53][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[53][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[53][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[54][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[54][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[54][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[54][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[54][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[54][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[54][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[54][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[55][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[55][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[55][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[55][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[55][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[55][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[55][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[55][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[56][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[56][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[56][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[56][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[56][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[56][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[56][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[56][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[57][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[57][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[57][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[57][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[57][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[57][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[57][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[57][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[58][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[58][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[58][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[58][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[58][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[58][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[58][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[58][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[59][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[59][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[59][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[59][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[59][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[59][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[59][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[59][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[60][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[60][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[60][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[60][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[60][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[60][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[60][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[60][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[61][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[61][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[61][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[61][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[61][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[61][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[61][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[61][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[62][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[62][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[62][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[62][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[62][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[62][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[62][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[62][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[63][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[63][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[63][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[63][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[63][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[63][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[63][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[63][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[64][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[64][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[64][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[64][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[64][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[64][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[64][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[64][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_flower_func_table_0[65][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[65][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[65][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[65][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[65][4] = &ZrO_Clexulator_hop1::site_eval_bfunc_4_0_at_65<double>;
    m_flower_func_table_0[65][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[65][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_flower_func_table_0[65][7] = &ZrO_Clexulator_hop1::site_eval_bfunc_7_0_at_65<double>;


    m_delta_func_table_0[0][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[0][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[0][2] = &ZrO_Clexulator_hop1::site_deval_bfunc_2_0_at_0<double>;
    m_delta_func_table_0[0][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[0][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[0][5] = &ZrO_Clexulator_hop1::site_deval_bfunc_5_0_at_0<double>;
    m_delta_func_table_0[0][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[0][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[1][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[1][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[1][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[1][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[1][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[1][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[1][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[1][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[2][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[2][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[2][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[2][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[2][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[2][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[2][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[2][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[3][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[3][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[3][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[3][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[3][4] = &ZrO_Clexulator_hop1::site_deval_bfunc_4_0_at_3<double>;
    m_delta_func_table_0[3][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[3][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[3][7] = &ZrO_Clexulator_hop1::site_deval_bfunc_7_0_at_3<double>;


    m_delta_func_table_0[4][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[4][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[4][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[4][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[4][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[4][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[4][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[4][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[5][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[5][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[5][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[5][3] = &ZrO_Clexulator_hop1::site_deval_bfunc_3_0_at_5<double>;
    m_delta_func_table_0[5][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[5][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[5][6] = &ZrO_Clexulator_hop1::site_deval_bfunc_6_0_at_5<double>;
    m_delta_func_table_0[5][7] = &ZrO_Clexulator_hop1::site_deval_bfunc_7_0_at_5<double>;


    m_delta_func_table_0[6][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[6][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[6][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[6][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[6][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[6][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[6][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[6][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[7][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[7][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[7][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[7][3] = &ZrO_Clexulator_hop1::site_deval_bfunc_3_0_at_7<double>;
    m_delta_func_table_0[7][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[7][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[7][6] = &ZrO_Clexulator_hop1::site_deval_bfunc_6_0_at_7<double>;
    m_delta_func_table_0[7][7] = &ZrO_Clexulator_hop1::site_deval_bfunc_7_0_at_7<double>;


    m_delta_func_table_0[8][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[8][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[8][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[8][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[8][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[8][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[8][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[8][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[9][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[9][1] = &ZrO_Clexulator_hop1::site_deval_bfunc_1_0_at_9<double>;
    m_delta_func_table_0[9][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[9][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[9][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[9][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[9][6] = &ZrO_Clexulator_hop1::site_deval_bfunc_6_0_at_9<double>;
    m_delta_func_table_0[9][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[10][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[10][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[10][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[10][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[10][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[10][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[10][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[10][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[11][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[11][1] = &ZrO_Clexulator_hop1::site_deval_bfunc_1_0_at_11<double>;
    m_delta_func_table_0[11][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[11][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[11][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[11][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[11][6] = &ZrO_Clexulator_hop1::site_deval_bfunc_6_0_at_11<double>;
    m_delta_func_table_0[11][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[12][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[12][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[12][2] = &ZrO_Clexulator_hop1::site_deval_bfunc_2_0_at_12<double>;
    m_delta_func_table_0[12][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[12][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[12][5] = &ZrO_Clexulator_hop1::site_deval_bfunc_5_0_at_12<double>;
    m_delta_func_table_0[12][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[12][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[13][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[13][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[13][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[13][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[13][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[13][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[13][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[13][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[14][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[14][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[14][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[14][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[14][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[14][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[14][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[14][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[15][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[15][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[15][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[15][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[15][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[15][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[15][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[15][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[16][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[16][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[16][2] = &ZrO_Clexulator_hop1::site_deval_bfunc_2_0_at_16<double>;
    m_delta_func_table_0[16][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[16][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[16][5] = &ZrO_Clexulator_hop1::site_deval_bfunc_5_0_at_16<double>;
    m_delta_func_table_0[16][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[16][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[17][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[17][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[17][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[17][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[17][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[17][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[17][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[17][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[18][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[18][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[18][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[18][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[18][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[18][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[18][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[18][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[19][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[19][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[19][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[19][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[19][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[19][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[19][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[19][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[20][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[20][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[20][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[20][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[20][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[20][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[20][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[20][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[21][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[21][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[21][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[21][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[21][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[21][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[21][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[21][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[22][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[22][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[22][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[22][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[22][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[22][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[22][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[22][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[23][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[23][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[23][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[23][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[23][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[23][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[23][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[23][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[24][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[24][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[24][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[24][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[24][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[24][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[24][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[24][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[25][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[25][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[25][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[25][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[25][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[25][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[25][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[25][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[26][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[26][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[26][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[26][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[26][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[26][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[26][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[26][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[27][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[27][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[27][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[27][3] = &ZrO_Clexulator_hop1::site_deval_bfunc_3_0_at_27<double>;
    m_delta_func_table_0[27][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[27][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[27][6] = &ZrO_Clexulator_hop1::site_deval_bfunc_6_0_at_27<double>;
    m_delta_func_table_0[27][7] = &ZrO_Clexulator_hop1::site_deval_bfunc_7_0_at_27<double>;


    m_delta_func_table_0[28][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[28][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[28][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[28][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[28][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[28][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[28][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[28][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[29][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[29][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[29][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[29][3] = &ZrO_Clexulator_hop1::site_deval_bfunc_3_0_at_29<double>;
    m_delta_func_table_0[29][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[29][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[29][6] = &ZrO_Clexulator_hop1::site_deval_bfunc_6_0_at_29<double>;
    m_delta_func_table_0[29][7] = &ZrO_Clexulator_hop1::site_deval_bfunc_7_0_at_29<double>;


    m_delta_func_table_0[30][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[30][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[30][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[30][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[30][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[30][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[30][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[30][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[31][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[31][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[31][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[31][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[31][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[31][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[31][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[31][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[32][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[32][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[32][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[32][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[32][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[32][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[32][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[32][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[33][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[33][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[33][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[33][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[33][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[33][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[33][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[33][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[34][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[34][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[34][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[34][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[34][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[34][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[34][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[34][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[35][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[35][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[35][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[35][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[35][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[35][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[35][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[35][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[36][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[36][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[36][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[36][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[36][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[36][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[36][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[36][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[37][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[37][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[37][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[37][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[37][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[37][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[37][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[37][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[38][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[38][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[38][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[38][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[38][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[38][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[38][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[38][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[39][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[39][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[39][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[39][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[39][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[39][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[39][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[39][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[40][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[40][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[40][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[40][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[40][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[40][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[40][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[40][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[41][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[41][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[41][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[41][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[41][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[41][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[41][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[41][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[42][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[42][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[42][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[42][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[42][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[42][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[42][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[42][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[43][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[43][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[43][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[43][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[43][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[43][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[43][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[43][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[44][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[44][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[44][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[44][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[44][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[44][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[44][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[44][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[45][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[45][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[45][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[45][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[45][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[45][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[45][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[45][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[46][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[46][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[46][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[46][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[46][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[46][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[46][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[46][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[47][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[47][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[47][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[47][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[47][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[47][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[47][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[47][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[48][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[48][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[48][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[48][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[48][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[48][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[48][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[48][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[49][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[49][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[49][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[49][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[49][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[49][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[49][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[49][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[50][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[50][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[50][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[50][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[50][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[50][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[50][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[50][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[51][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[51][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[51][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[51][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[51][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[51][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[51][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[51][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[52][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[52][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[52][2] = &ZrO_Clexulator_hop1::site_deval_bfunc_2_0_at_52<double>;
    m_delta_func_table_0[52][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[52][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[52][5] = &ZrO_Clexulator_hop1::site_deval_bfunc_5_0_at_52<double>;
    m_delta_func_table_0[52][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[52][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[53][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[53][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[53][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[53][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[53][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[53][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[53][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[53][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[54][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[54][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[54][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[54][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[54][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[54][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[54][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[54][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[55][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[55][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[55][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[55][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[55][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[55][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[55][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[55][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[56][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[56][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[56][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[56][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[56][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[56][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[56][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[56][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[57][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[57][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[57][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[57][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[57][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[57][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[57][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[57][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[58][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[58][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[58][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[58][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[58][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[58][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[58][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[58][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[59][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[59][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[59][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[59][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[59][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[59][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[59][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[59][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[60][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[60][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[60][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[60][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[60][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[60][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[60][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[60][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[61][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[61][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[61][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[61][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[61][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[61][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[61][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[61][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[62][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[62][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[62][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[62][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[62][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[62][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[62][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[62][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[63][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[63][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[63][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[63][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[63][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[63][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[63][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[63][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[64][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[64][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[64][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[64][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[64][4] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[64][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[64][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[64][7] = &ZrO_Clexulator_hop1::zero_func<double>;


    m_delta_func_table_0[65][0] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[65][1] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[65][2] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[65][3] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[65][4] = &ZrO_Clexulator_hop1::site_deval_bfunc_4_0_at_65<double>;
    m_delta_func_table_0[65][5] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[65][6] = &ZrO_Clexulator_hop1::zero_func<double>;
    m_delta_func_table_0[65][7] = &ZrO_Clexulator_hop1::site_deval_bfunc_7_0_at_65<double>;


    m_weight_matrix.row(0) << 2, -1, 0;
    m_weight_matrix.row(1) << -1, 2, 0;
    m_weight_matrix.row(2) << 0, 0, 5;

    m_sublat_indices = std::set<int>{2, 3};

    m_n_sublattices = 4;

    m_neighborhood = std::set<xtal::UnitCell> {
      xtal::UnitCell(-1, -1, 0),
      xtal::UnitCell(-1, 0, 0),
      xtal::UnitCell(0, -1, 0),
      xtal::UnitCell(0, 0, 0),
      xtal::UnitCell(0, 0, 1),
      xtal::UnitCell(0, 1, 0),
      xtal::UnitCell(1, 0, 0),
      xtal::UnitCell(1, 1, 0),
      xtal::UnitCell(1, 1, 1),
      xtal::UnitCell(1, 2, 0),
      xtal::UnitCell(2, 1, 0),
      xtal::UnitCell(2, 2, 0)
    };


    m_orbit_neighborhood.resize(corr_size());
    m_orbit_site_neighborhood.resize(corr_size());
    m_orbit_neighborhood[1] = std::set<xtal::UnitCell> {
      xtal::UnitCell(0, 1, 0),
      xtal::UnitCell(1, 0, 0)
    };

    m_orbit_site_neighborhood[1] = std::set<xtal::UnitCellCoord> {
      xtal::UnitCellCoord(3, 0, 1, 0),
      xtal::UnitCellCoord(3, 1, 0, 0)
    };

    m_orbit_neighborhood[2] = std::set<xtal::UnitCell> {
      xtal::UnitCell(0, 0, 0),
      xtal::UnitCell(0, 0, 1),
      xtal::UnitCell(1, 1, 0),
      xtal::UnitCell(1, 1, 1)
    };

    m_orbit_site_neighborhood[2] = std::set<xtal::UnitCellCoord> {
      xtal::UnitCellCoord(2, 0, 0, 0),
      xtal::UnitCellCoord(2, 0, 0, 1),
      xtal::UnitCellCoord(2, 1, 1, 0),
      xtal::UnitCellCoord(2, 1, 1, 1)
    };

    m_orbit_neighborhood[3] = std::set<xtal::UnitCell> {
      xtal::UnitCell(-1, 0, 0),
      xtal::UnitCell(0, -1, 0),
      xtal::UnitCell(1, 2, 0),
      xtal::UnitCell(2, 1, 0)
    };

    m_orbit_site_neighborhood[3] = std::set<xtal::UnitCellCoord> {
      xtal::UnitCellCoord(3, -1, 0, 0),
      xtal::UnitCellCoord(3, 0, -1, 0),
      xtal::UnitCellCoord(3, 1, 2, 0),
      xtal::UnitCellCoord(3, 2, 1, 0)
    };

    m_orbit_neighborhood[4] = std::set<xtal::UnitCell> {
      xtal::UnitCell(-1, -1, 0),
      xtal::UnitCell(2, 2, 0)
    };

    m_orbit_site_neighborhood[4] = std::set<xtal::UnitCellCoord> {
      xtal::UnitCellCoord(3, -1, -1, 0),
      xtal::UnitCellCoord(3, 2, 2, 0)
    };

    m_orbit_neighborhood[5] = std::set<xtal::UnitCell> {
      xtal::UnitCell(0, 0, 0),
      xtal::UnitCell(0, 0, 1),
      xtal::UnitCell(1, 1, 0),
      xtal::UnitCell(1, 1, 1)
    };

    m_orbit_site_neighborhood[5] = std::set<xtal::UnitCellCoord> {
      xtal::UnitCellCoord(2, 0, 0, 0),
      xtal::UnitCellCoord(2, 0, 0, 1),
      xtal::UnitCellCoord(2, 1, 1, 0),
      xtal::UnitCellCoord(2, 1, 1, 1)
    };

    m_orbit_neighborhood[6] = std::set<xtal::UnitCell> {
      xtal::UnitCell(-1, 0, 0),
      xtal::UnitCell(0, -1, 0),
      xtal::UnitCell(0, 1, 0),
      xtal::UnitCell(1, 0, 0),
      xtal::UnitCell(1, 2, 0),
      xtal::UnitCell(2, 1, 0)
    };

    m_orbit_site_neighborhood[6] = std::set<xtal::UnitCellCoord> {
      xtal::UnitCellCoord(3, -1, 0, 0),
      xtal::UnitCellCoord(3, 0, -1, 0),
      xtal::UnitCellCoord(3, 0, 1, 0),
      xtal::UnitCellCoord(3, 1, 0, 0),
      xtal::UnitCellCoord(3, 1, 2, 0),
      xtal::UnitCellCoord(3, 2, 1, 0)
    };

    m_orbit_neighborhood[7] = std::set<xtal::UnitCell> {
      xtal::UnitCell(-1, -1, 0),
      xtal::UnitCell(-1, 0, 0),
      xtal::UnitCell(0, -1, 0),
      xtal::UnitCell(1, 2, 0),
      xtal::UnitCell(2, 1, 0),
      xtal::UnitCell(2, 2, 0)
    };

    m_orbit_site_neighborhood[7] = std::set<xtal::UnitCellCoord> {
      xtal::UnitCellCoord(3, -1, -1, 0),
      xtal::UnitCellCoord(3, -1, 0, 0),
      xtal::UnitCellCoord(3, 0, -1, 0),
      xtal::UnitCellCoord(3, 1, 2, 0),
      xtal::UnitCellCoord(3, 2, 1, 0),
      xtal::UnitCellCoord(3, 2, 2, 0)
    };

  }


  ZrO_Clexulator_hop1::~ZrO_Clexulator_hop1() {
    //nothing here for now
  }

  /// \brief Calculate contribution to global correlations from one unit cell
  void ZrO_Clexulator_hop1::_calc_global_corr_contribution(double *corr_begin) const {
    _calc_global_corr_contribution();
    for(size_type i = 0; i < corr_size(); i++) {
      *(corr_begin + i) = ParamPack::Val<double>::get(m_params, m_corr_param_key, i);
    }
  }

  /// \brief Calculate contribution to global correlations from one unit cell
  void ZrO_Clexulator_hop1::_calc_global_corr_contribution() const {
    m_params.pre_eval();
    {
      _global_prepare<double>();
      for(size_type i = 0; i < corr_size(); i++) {
        ParamPack::Val<double>::set(m_params, m_corr_param_key, i, (this->*m_orbit_func_table_0[i])());
      }
    }
    m_params.post_eval();
  }

  /// \brief Calculate contribution to select global correlations from one unit cell
  void ZrO_Clexulator_hop1::_calc_restricted_global_corr_contribution(double *corr_begin, size_type const *ind_list_begin, size_type const *ind_list_end) const {
    _calc_restricted_global_corr_contribution(ind_list_begin, ind_list_end);
    for(; ind_list_begin < ind_list_end; ind_list_begin++) {
      *(corr_begin + *ind_list_begin) = ParamPack::Val<double>::get(m_params, m_corr_param_key, *ind_list_begin);
    }
  }

  /// \brief Calculate contribution to select global correlations from one unit cell
  void ZrO_Clexulator_hop1::_calc_restricted_global_corr_contribution(size_type const *ind_list_begin, size_type const *ind_list_end) const {
    m_params.pre_eval();
    {
      _global_prepare<double>();
      for(; ind_list_begin < ind_list_end; ind_list_begin++) {
        ParamPack::Val<double>::set(m_params, m_corr_param_key, *ind_list_begin, (this->*m_orbit_func_table_0[*ind_list_begin])());
      }
    }
    m_params.post_eval();
  }

  /// \brief Calculate point correlations about basis site 'nlist_ind'
  void ZrO_Clexulator_hop1::_calc_point_corr(int nlist_ind, double *corr_begin) const {
    _calc_point_corr(nlist_ind);
    for(size_type i = 0; i < corr_size(); i++) {
      *(corr_begin + i) = ParamPack::Val<double>::get(m_params, m_corr_param_key, i);
    }
  }

  /// \brief Calculate point correlations about basis site 'nlist_ind'
  void ZrO_Clexulator_hop1::_calc_point_corr(int nlist_ind) const {
    m_params.pre_eval();
    {
      _point_prepare<double>(nlist_ind);
      for(size_type i = 0; i < corr_size(); i++) {
        ParamPack::Val<double>::set(m_params, m_corr_param_key, i, (this->*m_flower_func_table_0[nlist_ind][i])());
      }
    }
    m_params.post_eval();
  }

  /// \brief Calculate select point correlations about basis site 'nlist_ind'
  void ZrO_Clexulator_hop1::_calc_restricted_point_corr(int nlist_ind, double *corr_begin, size_type const *ind_list_begin, size_type const *ind_list_end) const {
    _calc_restricted_point_corr(nlist_ind, ind_list_begin, ind_list_end);
    for(; ind_list_begin < ind_list_end; ind_list_begin++) {
      *(corr_begin + *ind_list_begin) = ParamPack::Val<double>::get(m_params, m_corr_param_key, *ind_list_begin);
    }
  }

  /// \brief Calculate select point correlations about basis site 'nlist_ind'
  void ZrO_Clexulator_hop1::_calc_restricted_point_corr(int nlist_ind, size_type const *ind_list_begin, size_type const *ind_list_end) const {
    m_params.pre_eval();
    {
      _point_prepare<double>(nlist_ind);
      for(; ind_list_begin < ind_list_end; ind_list_begin++) {
        ParamPack::Val<double>::set(m_params, m_corr_param_key, *ind_list_begin, (this->*m_flower_func_table_0[nlist_ind][*ind_list_begin])());
      }
    }
    m_params.post_eval();
  }

  /// \brief Calculate the change in point correlations due to changing an occupant
  void ZrO_Clexulator_hop1::_calc_delta_point_corr(int nlist_ind, int occ_i, int occ_f, double *corr_begin) const {
    _calc_delta_point_corr(nlist_ind, occ_i, occ_f);
    for(size_type i = 0; i < corr_size(); i++) {
      *(corr_begin + i) = ParamPack::Val<double>::get(m_params, m_corr_param_key, i);
    }
  }

  /// \brief Calculate the change in point correlations due to changing an occupant
  void ZrO_Clexulator_hop1::_calc_delta_point_corr(int nlist_ind, int occ_i, int occ_f) const {
    m_params.pre_eval();
    {
      _point_prepare<double>(nlist_ind);
     for(size_type i = 0; i < corr_size(); i++) {
        ParamPack::Val<double>::set(m_params, m_corr_param_key, i, (this->*m_delta_func_table_0[nlist_ind][i])(occ_i, occ_f));
      }
    }
    m_params.post_eval();
  }

  /// \brief Calculate the change in select point correlations due to changing an occupant
  void ZrO_Clexulator_hop1::_calc_restricted_delta_point_corr(int nlist_ind, int occ_i, int occ_f, double *corr_begin, size_type const *ind_list_begin, size_type const *ind_list_end) const {
    _calc_restricted_delta_point_corr(nlist_ind, occ_i, occ_f, ind_list_begin, ind_list_end);
    for(; ind_list_begin < ind_list_end; ind_list_begin++) {
      *(corr_begin + *ind_list_begin) = ParamPack::Val<double>::get(m_params, m_corr_param_key, *ind_list_begin);
    }
  }

  /// \brief Calculate the change in select point correlations due to changing an occupant
  void ZrO_Clexulator_hop1::_calc_restricted_delta_point_corr(int nlist_ind, int occ_i, int occ_f, size_type const *ind_list_begin, size_type const *ind_list_end) const {
    m_params.pre_eval();
    {
      _point_prepare<double>(nlist_ind);
      for(; ind_list_begin < ind_list_end; ind_list_begin++) {
        ParamPack::Val<double>::set(m_params, m_corr_param_key, *ind_list_begin, (this->*m_delta_func_table_0[nlist_ind][*ind_list_begin])(occ_i, occ_f));
      }
    }
    m_params.post_eval();
  }


  template<typename Scalar>
  void ZrO_Clexulator_hop1::_point_prepare(int nlist_ind) const {
    switch(nlist_ind) {
    case 3:
      if(m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3, eval_occ_func_3_0(3));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5, eval_occ_func_3_0(5));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7, eval_occ_func_3_0(7));
      }
      break;
    case 5:
      if(m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3, eval_occ_func_3_0(3));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5, eval_occ_func_3_0(5));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9, eval_occ_func_3_0(9));
      }
      break;
    case 7:
      if(m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3, eval_occ_func_3_0(3));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7, eval_occ_func_3_0(7));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11, eval_occ_func_3_0(11));
      }
      break;
    case 0:
      if(m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 0, eval_occ_func_2_0(0));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12, eval_occ_func_2_0(12));
      }
      break;
    case 16:
      if(m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 16, eval_occ_func_2_0(16));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 52, eval_occ_func_2_0(52));
      }
      break;
    case 9:
      if(m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5, eval_occ_func_3_0(5));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9, eval_occ_func_3_0(9));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 27, eval_occ_func_3_0(27));
      }
      break;
    case 11:
      if(m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7, eval_occ_func_3_0(7));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11, eval_occ_func_3_0(11));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 29, eval_occ_func_3_0(29));
      }
      break;
    case 12:
      if(m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 0, eval_occ_func_2_0(0));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12, eval_occ_func_2_0(12));
      }
      break;
    case 52:
      if(m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 16, eval_occ_func_2_0(16));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 52, eval_occ_func_2_0(52));
      }
      break;
    case 27:
      if(m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9, eval_occ_func_3_0(9));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 27, eval_occ_func_3_0(27));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 65, eval_occ_func_3_0(65));
      }
      break;
    case 29:
      if(m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11, eval_occ_func_3_0(11));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 29, eval_occ_func_3_0(29));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 65, eval_occ_func_3_0(65));
      }
      break;
    case 65:
      if(m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 27, eval_occ_func_3_0(27));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 29, eval_occ_func_3_0(29));
        ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 65, eval_occ_func_3_0(65));
      }
      break;
    }
  }
  template<typename Scalar>
  void ZrO_Clexulator_hop1::_global_prepare() const {
  if(m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 0, eval_occ_func_2_0(0));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12, eval_occ_func_2_0(12));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 16, eval_occ_func_2_0(16));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 52, eval_occ_func_2_0(52));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3, eval_occ_func_3_0(3));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5, eval_occ_func_3_0(5));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7, eval_occ_func_3_0(7));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9, eval_occ_func_3_0(9));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11, eval_occ_func_3_0(11));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 27, eval_occ_func_3_0(27));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 29, eval_occ_func_3_0(29));
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 65, eval_occ_func_3_0(65));
  }
  }

  // Basis functions for empty cluster:
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::eval_bfunc_0_0() const {
    return 1;
  }

  /**** Basis functions for orbit 1****
0.3333333 1.6666667 0.7500000 Va  O  

  ****/
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::eval_bfunc_1_0() const {
    return (occ_func_3_0(9) + occ_func_3_0(11)) / 2.;
  }

  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_1_0_at_9() const {
    return (occ_func_3_0(9)) / 2.;
  }
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_1_0_at_11() const {
    return (occ_func_3_0(11)) / 2.;
  }
    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_1_0_at_9(int occ_i, int occ_f) const {
    return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 2.;
  }

    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_1_0_at_11(int occ_i, int occ_f) const {
    return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 2.;
  }

  /**** Basis functions for orbit 2****
0.3333333 0.6666667 0.2500000 Va  O  

  ****/
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::eval_bfunc_2_0() const {
    return (occ_func_2_0(0) + occ_func_2_0(16) + occ_func_2_0(12) + occ_func_2_0(52)) / 4.;
  }

  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_2_0_at_0() const {
    return (occ_func_2_0(0)) / 4.;
  }
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_2_0_at_16() const {
    return (occ_func_2_0(16)) / 4.;
  }
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_2_0_at_12() const {
    return (occ_func_2_0(12)) / 4.;
  }
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_2_0_at_52() const {
    return (occ_func_2_0(52)) / 4.;
  }
    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_2_0_at_0(int occ_i, int occ_f) const {
    return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (1) / 4.;
  }

    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_2_0_at_16(int occ_i, int occ_f) const {
    return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (1) / 4.;
  }

    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_2_0_at_12(int occ_i, int occ_f) const {
    return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (1) / 4.;
  }

    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_2_0_at_52(int occ_i, int occ_f) const {
    return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (1) / 4.;
  }

  /**** Basis functions for orbit 3****
-0.6666667 0.6666667 0.7500000 Va  O  

  ****/
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::eval_bfunc_3_0() const {
    return (occ_func_3_0(5) + occ_func_3_0(7) + occ_func_3_0(27) + occ_func_3_0(29)) / 4.;
  }

  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_3_0_at_5() const {
    return (occ_func_3_0(5)) / 4.;
  }
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_3_0_at_7() const {
    return (occ_func_3_0(7)) / 4.;
  }
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_3_0_at_27() const {
    return (occ_func_3_0(27)) / 4.;
  }
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_3_0_at_29() const {
    return (occ_func_3_0(29)) / 4.;
  }
    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_3_0_at_5(int occ_i, int occ_f) const {
    return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 4.;
  }

    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_3_0_at_7(int occ_i, int occ_f) const {
    return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 4.;
  }

    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_3_0_at_27(int occ_i, int occ_f) const {
    return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 4.;
  }

    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_3_0_at_29(int occ_i, int occ_f) const {
    return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 4.;
  }

  /**** Basis functions for orbit 4****
-0.6666667 -0.3333333 0.7500000 Va  O  

  ****/
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::eval_bfunc_4_0() const {
    return (occ_func_3_0(3) + occ_func_3_0(65)) / 2.;
  }

  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_4_0_at_3() const {
    return (occ_func_3_0(3)) / 2.;
  }
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_4_0_at_65() const {
    return (occ_func_3_0(65)) / 2.;
  }

    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_4_0_at_3(int occ_i, int occ_f) const {
    return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 2.;
  }

    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_4_0_at_65(int occ_i, int occ_f) const {
    return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (1) / 2.;
  }

  /**** Basis functions for orbit 5****
0.3333333 0.6666667 0.2500000 Va  O  

1.3333333 1.6666667 0.2500000 Va  O  

  ****/
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::eval_bfunc_5_0() const {
    return (occ_func_2_0(0) * occ_func_2_0(12) + occ_func_2_0(16) * occ_func_2_0(52)) / 2.;
  }

  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_5_0_at_0() const {
    return (occ_func_2_0(0) * occ_func_2_0(12)) / 2.;
  }
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_5_0_at_16() const {
    return (occ_func_2_0(16) * occ_func_2_0(52)) / 2.;
  }
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_5_0_at_12() const {
    return (occ_func_2_0(0) * occ_func_2_0(12)) / 2.;
  }
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_5_0_at_52() const {
    return (occ_func_2_0(16) * occ_func_2_0(52)) / 2.;
  }
    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_5_0_at_0(int occ_i, int occ_f) const {
    return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(12)) / 2.;
  }

    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_5_0_at_16(int occ_i, int occ_f) const {
    return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(52)) / 2.;
  }

    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_5_0_at_12(int occ_i, int occ_f) const {
    return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(0)) / 2.;
  }

    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_5_0_at_52(int occ_i, int occ_f) const {
    return (m_occ_func_2_0[occ_f] - m_occ_func_2_0[occ_i]) * (occ_func_2_0(16)) / 2.;
  }

  /**** Basis functions for orbit 6****
-0.6666667 0.6666667 0.7500000 Va  O  

0.3333333 1.6666667 0.7500000 Va  O  

  ****/
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::eval_bfunc_6_0() const {
    return (occ_func_3_0(5) * occ_func_3_0(9) + occ_func_3_0(7) * occ_func_3_0(11) + occ_func_3_0(27) * occ_func_3_0(9) + occ_func_3_0(29) * occ_func_3_0(11)) / 4.;
  }

  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_6_0_at_5() const {
    return (occ_func_3_0(5) * occ_func_3_0(9)) / 4.;
  }
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_6_0_at_7() const {
    return (occ_func_3_0(7) * occ_func_3_0(11)) / 4.;
  }
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_6_0_at_9() const {
    return (occ_func_3_0(5) * occ_func_3_0(9) + occ_func_3_0(27) * occ_func_3_0(9)) / 4.;
  }
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_6_0_at_11() const {
    return (occ_func_3_0(7) * occ_func_3_0(11) + occ_func_3_0(29) * occ_func_3_0(11)) / 4.;
  }
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_6_0_at_27() const {
    return (occ_func_3_0(27) * occ_func_3_0(9)) / 4.;
  }
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_6_0_at_29() const {
    return (occ_func_3_0(29) * occ_func_3_0(11)) / 4.;
  }
    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_6_0_at_5(int occ_i, int occ_f) const {
    return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(9)) / 4.;
  }

    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_6_0_at_7(int occ_i, int occ_f) const {
    return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(11)) / 4.;
  }

    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_6_0_at_9(int occ_i, int occ_f) const {
    return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(5) + occ_func_3_0(27)) / 4.;
  }

    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_6_0_at_11(int occ_i, int occ_f) const {
    return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(7) + occ_func_3_0(29)) / 4.;
  }

    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_6_0_at_27(int occ_i, int occ_f) const {
    return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(9)) / 4.;
  }

    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_6_0_at_29(int occ_i, int occ_f) const {
    return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(11)) / 4.;
  }

  /**** Basis functions for orbit 7****
-0.6666667 -0.3333333 0.7500000 Va  O  

-0.6666667 0.6666667 0.7500000 Va  O  

  ****/
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::eval_bfunc_7_0() const {
    return (occ_func_3_0(3) * occ_func_3_0(5) + occ_func_3_0(3) * occ_func_3_0(7) + occ_func_3_0(65) * occ_func_3_0(27) + occ_func_3_0(65) * occ_func_3_0(29)) / 4.;
  }

  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_7_0_at_3() const {
    return (occ_func_3_0(3) * occ_func_3_0(5) + occ_func_3_0(3) * occ_func_3_0(7)) / 4.;
  }
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_7_0_at_5() const {
    return (occ_func_3_0(3) * occ_func_3_0(5)) / 4.;
  }
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_7_0_at_7() const {
    return (occ_func_3_0(3) * occ_func_3_0(7)) / 4.;
  }
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_7_0_at_27() const {
    return (occ_func_3_0(65) * occ_func_3_0(27)) / 4.;
  }
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_7_0_at_29() const {
    return (occ_func_3_0(65) * occ_func_3_0(29)) / 4.;
  }
  template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_eval_bfunc_7_0_at_65() const {
    return (occ_func_3_0(65) * occ_func_3_0(27) + occ_func_3_0(65) * occ_func_3_0(29)) / 4.;
  }

    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_7_0_at_3(int occ_i, int occ_f) const {
    return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(5) + occ_func_3_0(7)) / 4.;
  }

    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_7_0_at_5(int occ_i, int occ_f) const {
    return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(3)) / 4.;
  }

    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_7_0_at_7(int occ_i, int occ_f) const {
    return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(3)) / 4.;
  }

    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_7_0_at_27(int occ_i, int occ_f) const {
    return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(65)) / 4.;
  }

    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_7_0_at_29(int occ_i, int occ_f) const {
    return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(65)) / 4.;
  }

    template<typename Scalar>
  Scalar ZrO_Clexulator_hop1::site_deval_bfunc_7_0_at_65(int occ_i, int occ_f) const {
    return (m_occ_func_3_0[occ_f] - m_occ_func_3_0[occ_i]) * (occ_func_3_0(27) + occ_func_3_0(29)) / 4.;
  }

} // namespace clexulator
} // namespace CASM


extern "C" {
  /// \brief Returns a clexulator::BaseClexulator* owning a ZrO_Clexulator_hop1
  CASM::clexulator::BaseClexulator *make_ZrO_Clexulator_hop1() {
    return new CASM::clexulator::ZrO_Clexulator_hop1();
  }

}

