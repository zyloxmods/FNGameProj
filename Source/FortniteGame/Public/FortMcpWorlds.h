#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortActiveTheaterInfo.h"
#include "FortMcpResource.h"
#include "FortMcpWorlds.generated.h"

class UWorld;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMcpWorlds : public UFortMcpResource {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortActiveTheaterInfo TheaterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TheaterQueryRetry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastTheaterRefresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> LastWorld;
    
public:
    UFortMcpWorlds();
};

