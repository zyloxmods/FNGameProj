#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortCreativeServerOptionTile.generated.h"

class UCommonTextBlock;
class UFortCreativeServerInfo;

UCLASS(Blueprintable, EditInlineNew)
class UFortCreativeServerOptionTile : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_JoinServerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_JoinServerPlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCreativeServerInfo* Server;
    
public:
    UFortCreativeServerOptionTile();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBPData(const UFortCreativeServerInfo* ServerInfo);
    
};

