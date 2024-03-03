#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "LTMWidgetBase.h"
#include "TagTeamChangeMessage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTagTeamChangeMessage : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BlueTeamTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RedTeamTag;
    
public:
    UTagTeamChangeMessage();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTeam(bool bIsIt);
    
};

