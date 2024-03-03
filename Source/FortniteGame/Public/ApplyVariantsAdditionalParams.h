#pragma once
#include "CoreMinimal.h"
#include "CosmeticVariantInfo.h"
#include "ApplyVariantsAdditionalParams.generated.h"

class AFortPlayerPawn;
class UActorComponent;

USTRUCT(BlueprintType)
struct FApplyVariantsAdditionalParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerPawn> WeakPlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> AdditionalVariantComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyToAdditionalVariantComponentsOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeriveMIDNameFromParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldResetOverrideMaterialsOnMeshSwap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCosmeticVariantInfo> PreviouslyActiveVariants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBackpackReliesOnVariantsFromCID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGliderReliesOnVariantsFromCID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForbidParticleSwapping;
    
    FORTNITEGAME_API FApplyVariantsAdditionalParams();
};

