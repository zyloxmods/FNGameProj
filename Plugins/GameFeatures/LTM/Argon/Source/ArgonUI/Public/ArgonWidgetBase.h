#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "ArgonWidgetBase.generated.h"

class AFortAthenaMutator_Argon;
class AFortPlayerStateAthena;
class UFortLazyImage;

UCLASS(Blueprintable, EditInlineNew)
class UArgonWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Argon* ArgonMutator;
    
public:
    UArgonWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnbindFromMutator_BP();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetPlayerPortrait(AFortPlayerStateAthena* Player, UFortLazyImage* PortraitImage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AFortPlayerStateAthena*> GetTeamPlayerStates(uint8 Team) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BindToMutator_BP();
    
};

