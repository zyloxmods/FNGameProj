#pragma once
#include "CoreMinimal.h"
#include "EFortAccoladeSubtype.h"
#include "AthenaXPStats.generated.h"

USTRUCT(BlueprintType)
struct FAthenaXPStats {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Stat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAccoladeSubtype Subtype;
    
public:
    FORTNITEGAME_API FAthenaXPStats();
};

