#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "OmahaCharacterVariantInfoData.h"
#include "FortAthenaMutator_Omaha.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_Omaha : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FOmahaCharacterVariantInfoData CharacterVariantInfoData[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FOmahaCharacterVariantInfoData SpecialCharacterVariantInfoData[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpecialTeamMembersCount[2];
    
public:
    AFortAthenaMutator_Omaha();
};

