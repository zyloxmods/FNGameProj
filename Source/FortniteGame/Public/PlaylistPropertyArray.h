#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "PropertyOverride.h"
#include "PropertyOverrideScope.h"
#include "PlaylistPropertyArray.generated.h"

class UFortPlaylistAthena;

USTRUCT(BlueprintType)
struct FPlaylistPropertyArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPropertyOverride> PropertyOverrides;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    int32 PlaylistReplicationKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlaylistAthena* BasePlaylist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    UFortPlaylistAthena* OverridePlaylist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FPropertyOverrideScope> PropertyOverrideScopes;
    
public:
    FORTNITEGAME_API FPlaylistPropertyArray();
};

