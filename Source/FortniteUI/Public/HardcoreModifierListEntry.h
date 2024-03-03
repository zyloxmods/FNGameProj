#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Blueprint/IUserListEntry.h"
#include "HardcoreModifierListEntry.generated.h"

class UButton;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UHardcoreModifierListEntry : public UCommonUserWidget, public IUserListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Modifier;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* Button_ClickCatcher;
    
public:
    UHardcoreModifierListEntry();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMaxLevelCompleted(int32 MaxLevel);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleModifierEnabled(bool bModifierEnabled);
    
    UFUNCTION(BlueprintCallable)
    void HandleEntryClicked();
    
    
    // Fix for true pure virtual functions not being implemented
};

