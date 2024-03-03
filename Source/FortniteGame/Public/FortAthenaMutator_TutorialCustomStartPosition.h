#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_TutorialCustomStartPosition.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_TutorialCustomStartPosition : public AFortAthenaMutator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TutorialStartTag;
    
public:
    AFortAthenaMutator_TutorialCustomStartPosition();
};

