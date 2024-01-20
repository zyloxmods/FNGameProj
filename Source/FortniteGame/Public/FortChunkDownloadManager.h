#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortChunkDownloadManager.generated.h"

UCLASS(Blueprintable, Config = Game)
class FORTNITEGAME_API UFortChunkDownloadManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PakChunk0Name;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> RequiredChunkIds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownloadTimeoutSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAssumeAllDataPresent;
    
public:
    UFortChunkDownloadManager();
};

