#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaMapNavigableIcon.generated.h"

class UImage;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaMapNavigableIcon : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Icon;
    
public:
    UAthenaMapNavigableIcon();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnselected(bool bUserInteraction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnhovered(bool bUserInteraction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetIsInGame(bool bIsInGame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetHasLocation(bool bHasLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelected(bool bUserInteraction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHovered(bool bUserInteraction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeBangVisibility(bool bShouldShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChallengeSet(bool bIsComplete, bool bIsLocked, bool bHasIconOverride, float Progress, bool bShouldShowBang);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChallengeReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChallengeIconOverriden(const UTexture2D* Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginIntroAnimation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIconSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIconHovered() const;
    
};

