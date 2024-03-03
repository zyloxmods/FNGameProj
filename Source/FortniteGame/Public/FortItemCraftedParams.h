#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortItemCraftedParams.generated.h"

class AFortPlayerController;
class UFortItemCraftedParams;
class UFortSchematicItemDefinition;

UCLASS(Blueprintable)
class UFortItemCraftedParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSchematicItemDefinition* SchematicDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* CraftedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountCrafted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bItemWasQuickCrafted;
    
    UFortItemCraftedParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(const UFortSchematicItemDefinition* _SchematicDefinition, AFortPlayerController* _CraftedBy, int32 _AmountCrafted, bool _bItemWasQuickCrafted, UFortItemCraftedParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(UFortSchematicItemDefinition*& _SchematicDefinition, AFortPlayerController*& _CraftedBy, int32& _AmountCrafted, bool& _bItemWasQuickCrafted);
    
};

