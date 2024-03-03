#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAthenaTutorialBase.h"
#include "FortAthenaTutorial_Completed.generated.h"

UCLASS(Blueprintable)
class AFortAthenaTutorial_Completed : public AFortAthenaTutorialBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag QuickbarTag;
    
    AFortAthenaTutorial_Completed();
};

