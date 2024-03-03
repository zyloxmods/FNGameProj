#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MusicTrackData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FMusicTrackData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> MusicTrackPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TrackName;
    
    FORTNITEGAME_API FMusicTrackData();
};

