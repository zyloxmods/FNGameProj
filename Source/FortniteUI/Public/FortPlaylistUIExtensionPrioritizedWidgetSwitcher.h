#pragma once
#include "CoreMinimal.h"
#include "EUIExtensionSlot.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "FortPrioritizedWidgetSwitcher.h"
#include "FortPlaylistUIExtensionPrioritizedWidgetSwitcher.generated.h"

class UFortPlaylistUIExtensionLoader;

UCLASS(Blueprintable)
class UFortPlaylistUIExtensionPrioritizedWidgetSwitcher : public UFortPrioritizedWidgetSwitcher {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> ContentHorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalAlignment> ContentVerticalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EUIExtensionSlot> ExtensionSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlaylistUIExtensionLoader* PlaylistUIExtensionLoader;
    
public:
    UFortPlaylistUIExtensionPrioritizedWidgetSwitcher();
};

