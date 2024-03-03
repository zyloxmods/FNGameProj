#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortPlaylistManager.generated.h"

class UFortPlaylistAthena;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPlaylistManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortPlaylistAthena*> AthenaPlaylists;
    
public:
    UFortPlaylistManager();
};

