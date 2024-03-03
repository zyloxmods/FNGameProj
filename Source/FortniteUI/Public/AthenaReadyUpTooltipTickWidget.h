#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaReadyUpTooltipTickWidget.generated.h"

class UFortPartyMember;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaReadyUpTooltipTickWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReadinessChanged, bool, bIsReadied);
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReadinessChanged OnReadinessChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPartyMember* CachedPartyMember;
    
public:
    UAthenaReadyUpTooltipTickWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPartyMember(UFortPartyMember* NewPartyMember);
    
};

