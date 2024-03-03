#pragma once
#include "CoreMinimal.h"
#include "XboxDedicatedServerSessionCreationParams.generated.h"

USTRUCT(BlueprintType)
struct FXboxDedicatedServerSessionCreationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SandboxId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> XboxUserIds;
    
    FORTNITEGAME_API FXboxDedicatedServerSessionCreationParams();
};

