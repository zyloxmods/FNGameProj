#pragma once
#include "CoreMinimal.h"
#include "GeneralChatRoom.generated.h"

USTRUCT(BlueprintType)
struct FGeneralChatRoom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RoomName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentMembersCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMembersCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PublicFacingShardName;
    
    FORTNITEGAME_API FGeneralChatRoom();
};

