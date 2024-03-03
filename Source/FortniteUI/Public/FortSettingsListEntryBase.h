#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Blueprint/IUserListEntry.h"
#include "FortSettingsListEntryBase.generated.h"

class UFortSetting;
class UUserWidget;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSettingsListEntryBase : public UCommonUserWidget, public IUserListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSetting* Setting;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* Background;
    
public:
    UFortSettingsListEntryBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* GetPrimaryGamepadFocusWidget();
    
    
    // Fix for true pure virtual functions not being implemented
};

