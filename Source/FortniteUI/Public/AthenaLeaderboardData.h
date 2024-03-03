#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "Engine/DataTable.h"
#include "AthenaPlaylistLeaderboardData.h"
#include "EFortAthenaPlaylist.h"
#include "AthenaLeaderboardData.generated.h"

USTRUCT(BlueprintType)
struct FAthenaLeaderboardData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAthenaPlaylist Playlist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlaylistName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputType InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaPlaylistLeaderboardData> Stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExcludePlaylistNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PlaylistNames;
    
    FORTNITEUI_API FAthenaLeaderboardData();
};

