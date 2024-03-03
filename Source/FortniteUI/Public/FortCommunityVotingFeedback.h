#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortCommunityVotingFeedback.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCommunityVotingFeedback : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UFortCommunityVotingFeedback();
    UFUNCTION(BlueprintCallable)
    void DestroyWidget();
    
};

