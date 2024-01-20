#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortResearchMenuBase.generated.h"

class UFortItemDefinition;

UCLASS(Blueprintable, EditInlineNew)
class UFortResearchMenuBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* ResearchRespecToken;
    
public:
    UFortResearchMenuBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UseResearchRespecToken();
    
    UFUNCTION(BlueprintCallable)
    void RequestPurchaseResearchLevel(const FString& StatId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUseResearchRespecTokenComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPurchaseResearchLevelStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPurchaseResearchLevelCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResearchRespecTokenCount() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetClaimableResearchPointEstimate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreResearchRespecTokensAvailable() const;
    
};

