#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortReplayTimelineMarker.generated.h"

class UCommonLazyImage;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortReplayTimelineMarker : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> MarkerIcons[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* LazyImage_MarkerIcon;
    
public:
    UFortReplayTimelineMarker();
};

