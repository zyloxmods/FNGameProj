#pragma once
#include "CoreMinimal.h"
#include "EUIExtensionSlot.h"
#include "Components/DynamicEntryBox.h"
#include "FortPlaylistUIExtensionSlot.generated.h"

class UFortPlaylistUIExtensionLoader;

UCLASS(Blueprintable)
class UFortPlaylistUIExtensionSlot : public UDynamicEntryBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EUIExtensionSlot> ExtensionSlots;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlaylistUIExtensionLoader* PlaylistUIExtensionLoader;
    
public:
    UFortPlaylistUIExtensionSlot();
};

