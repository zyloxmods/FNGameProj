#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_GameModeBase.h"
#include "FortAthenaMutator_Leave.generated.h"

class UMaterialInterface;
class UUserWidget;

UCLASS(Blueprintable)
class AFortAthenaMutator_Leave : public AFortAthenaMutator_GameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> CustomDBNOWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> CustomReviveIndicator;
    
    AFortAthenaMutator_Leave();
};

