#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortAnimInput_PlayerAnimAsset.h"
#include "FortWeaponAnimSet.generated.h"

UCLASS(Blueprintable)
class UFortWeaponAnimSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenFireAndFullBodySprint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAnimInput_PlayerAnimAsset MaleAnimAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAnimInput_PlayerAnimAsset FemaleAnimAsset;
    
public:
    UFortWeaponAnimSet();
};

