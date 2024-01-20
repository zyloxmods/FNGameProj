#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "AthenaLoadingScreenPreviewPanelBase.generated.h"

class UAthenaLoadingScreenItemDefinition;
class UNativeWidgetHost;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaLoadingScreenPreviewPanelBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaLoadingScreenItemDefinition* MyLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNativeWidgetHost* LoadingScreenSlot;
    
    UAthenaLoadingScreenPreviewPanelBase();
};

