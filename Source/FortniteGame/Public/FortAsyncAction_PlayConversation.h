#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FortConversationDelegateDelegate.h"
#include "FortAsyncAction_PlayConversation.generated.h"

class AFortPawn;
class UFortAsyncAction_PlayConversation;
class UFortConversation;

UCLASS(Blueprintable)
class UFortAsyncAction_PlayConversation : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortConversationDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortConversationDelegate OnCanceled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortConversationDelegate OnFailure;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPawn* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortConversation* ConversationToPlay;
    
public:
    UFortAsyncAction_PlayConversation();
    UFUNCTION(BlueprintCallable)
    static UFortAsyncAction_PlayConversation* PlayConversation(AFortPawn* NewPawn, UFortConversation* NewConversationToPlay);
    
};

