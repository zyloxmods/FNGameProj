#pragma once
#include "CoreMinimal.h"
#include "EPlaylistUIExtensionSlot.h"
#include "PlaylistUIExtension.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FPlaylistUIExtension {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlaylistUIExtensionSlot Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> WidgetClass;
    
    FORTNITEGAME_API FPlaylistUIExtension();
};

