#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SubtitleFormat.h"
#include "SubtitleDisplaySubsystem.generated.h"

UCLASS(Blueprintable)
class SUBTITLESWIDGETS_API USubtitleDisplaySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubtitleFormat SubtitleFormat;
    
public:
    USubtitleDisplaySubsystem();
};

