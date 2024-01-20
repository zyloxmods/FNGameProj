#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StatManager.generated.h"

class AFortPlayerController;
class UStat;

UCLASS(Blueprintable)
class FORTNITEGAME_API UStatManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStat*> Stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatPrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* FPC;
    
    UStatManager();
};

