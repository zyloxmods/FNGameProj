#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortAthenaMutator.h"
#include "LocationPOIList.h"
#include "TaggedPOIList.h"
#include "FortAthenaMutator_CenterSafezonesOnPOIs.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_CenterSafezonesOnPOIs : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UseFirstEntryForAllSafezones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat InitialSafezoneForcedToMapCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FTaggedPOIList> CenterSafezonesOnPOITag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FLocationPOIList> CenterSafezonesOnLiteralLocation;
    
public:
    AFortAthenaMutator_CenterSafezonesOnPOIs();
};

