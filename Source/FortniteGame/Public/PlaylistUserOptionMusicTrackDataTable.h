#pragma once
#include "CoreMinimal.h"
#include "PlaylistUserOptionBase.h"
#include "PlaylistUserOptionMusicTrackDataTable.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class FORTNITEGAME_API UPlaylistUserOptionMusicTrackDataTable : public UPlaylistUserOptionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultValue;
    
    UPlaylistUserOptionMusicTrackDataTable();
};

