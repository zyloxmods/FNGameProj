#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortLocalUserSettingsSection.generated.h"

class UDynamicEntryBox;
class UFortLocalUserSettingTitleButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLocalUserSettingsSection : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLocalUserSettingTitleButton* TitleButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Options;
    
public:
    UFortLocalUserSettingsSection();
};

