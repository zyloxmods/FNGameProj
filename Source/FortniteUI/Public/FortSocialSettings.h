#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortSocialSettings.generated.h"

class UDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSocialSettings : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Settings;
    
public:
    UFortSocialSettings();
};

