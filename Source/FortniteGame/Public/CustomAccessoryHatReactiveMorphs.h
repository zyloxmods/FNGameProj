#pragma once
#include "CoreMinimal.h"
#include "CustomAccessoryMorphs.h"
#include "CustomAccessoryHatReactiveMorphs.generated.h"

USTRUCT(BlueprintType)
struct FCustomAccessoryHatReactiveMorphs : public FCustomAccessoryMorphs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CapMorphTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HelmetMorphTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MaskMorphTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HatMorphTargets;
    
    FORTNITEGAME_API FCustomAccessoryHatReactiveMorphs();
};

