#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "DLSSUserPreferences.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class DLSS_API UDLSSUserPreferences : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDLSSInEditorViewports;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableScreenpercentageManipulationInDLSSEditorViewports;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDLSSInPlayInEditorViewports;
    
    UDLSSUserPreferences();
};

