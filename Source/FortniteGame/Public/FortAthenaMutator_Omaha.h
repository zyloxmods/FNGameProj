#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortAthenaMutator.h"
#include "OmahaCharacterVariantInfoData.h"
#include "FortAthenaMutator_Omaha.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_Omaha : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FOmahaCharacterVariantInfoData CharacterVariantInfoData[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FOmahaCharacterVariantInfoData SpecialCharacterVariantInfoData[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpecialTeamMembersCount[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HomeTeamIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AwayTeamIndex;
    
public:
    AFortAthenaMutator_Omaha();
};

