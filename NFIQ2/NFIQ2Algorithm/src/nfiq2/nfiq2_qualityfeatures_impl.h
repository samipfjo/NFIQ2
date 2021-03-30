#ifndef NFIQ2_NFIQ2_QUALITYFEATURES_IMPL_H_
#define NFIQ2_NFIQ2_QUALITYFEATURES_IMPL_H_

#include <nfiq2/fingerprintimagedata.hpp>
#include <nfiq2/nfiq2_qualityfeatures.hpp>

#include <list>
#include <string>
#include <vector>

namespace NFIQ { namespace QualityFeatures { namespace Impl {
/**
 * @brief
 * Obtain all actionable quality feedback identifiers.
 *
 * @return
 * Vector of strings containing all actionable quality feedback
 * identifiers.
 */
std::vector<std::string> getAllActionableIdentifiers();

/**
 * @brief
 * Obtain all quality feature IDs from quality modules.
 *
 * @return
 * Vector of strings containing all quality feature IDs.
 */
std::vector<std::string> getAllQualityFeatureIDs();

/**
 * @brief
 * Obtain all speed feature groups from quality modules.
 *
 * @return
 * Vector of strings containing all speed feature groups.
 */
std::vector<std::string> getAllSpeedFeatureGroups();

/**
 * @brief
 * Obtain computed quality feature data from a fingerprint image.
 *
 * @param rawImage
 * Fingerprint image in raw format
 * @param bComputeActionableQuality
 * If to compute actionable quality flags or not
 * @param actionableQuality
 * Compute actionable quality values
 * @param bOutputSpeed
 * If to output speed of computed features
 * @param speedValues
 * List of feature computation speed
 *
 * @return
 * A list of fingerprint quality feature data. This can be used with model
 * paramenters to produce a final NFIQ 2 score.
 */
std::vector<NFIQ::QualityFeatureData> computeQualityFeatures(
    const NFIQ::FingerprintImageData &rawImage, bool bComputeActionableQuality,
    std::vector<NFIQ::ActionableQualityFeedback> &actionableQuality,
    bool bOutputSpeed, std::vector<NFIQ::QualityFeatureSpeed> &speedValues);
}}}

#endif